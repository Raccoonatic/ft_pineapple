/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:19:51 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/19 17:41:48 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static int	px_waiting_room(char **wordy, char **envp, int input, int output);
static void	px_fork_the_children(pid_t *process, int closing);
static void	px_run_progone(char *command, char **envp, int input, int pipex[]);
static void	px_run_progtwo(char *command, char **envp, int output, int pipex[]);

int	main(int arc, char *wordy[], char *envp[])
{
	int	in_file;
	int	out_file;
	int	exit_code;

	if (arc != 5)
		px_fail(0, 0, 0, 1);
	in_file = open(wordy[1], O_RDONLY);
	out_file = open(wordy[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (in_file < 3 && errno == EACCES)
		in_file = open("/dev/null", O_RDONLY);
	if (in_file < 3)
		px_fail(1, in_file, out_file, 1);
	if (out_file < 3)
		px_fail(1, in_file, out_file, 1);
	exit_code = px_waiting_room(wordy, envp, in_file, out_file);
	px_closing_list(in_file, out_file);
	return (exit_code);
}

static int	px_waiting_room(char **wordy, char **envp, int input, int output)
{
	pid_t	pid_one;
	pid_t	pid_two;
	int		pipex[2];
	int		status;

	if (pipe(pipex) == -1)
		px_fail(2, input, output, 1);
	px_fork_the_children(&pid_one, output);
	if (pid_one < 0)
		px_fail(3, input, output, 1);
	if (pid_one == 0)
		px_run_progone(wordy[2], envp, input, pipex);
	if (pid_one > 0)
		px_fork_the_children(&pid_two, input);
	if (pid_two < 0)
		px_fail(4, input, output, 1);
	if (pid_two == 0)
		px_run_progtwo(wordy[3], envp, output, pipex);
	px_closing_list(pipex[0], pipex[1]);
	waitpid(pid_one, NULL, 0);
	waitpid(pid_two, &status, 0);
	return (status >> 8);
}

static void	px_fork_the_children(pid_t *process, int closing)
{
	*process = fork();
	if (*process > 0 || *process == -1)
		return ;
	close(closing);
}

static void	px_run_progone(char *command, char **envp, int input, int pipex[])
{
	char	**args;
	char	*pathname;

	args = ft_split(command, ' ');
	if (!args)
		px_fail(5, input, 0, 1);
	pathname = px_get_pathname(args[0], envp);
	px_set_up_channel_progone(input, pipex);
	if (pathname)
		execve(pathname, args, envp);
	else
		execve(args[0], args, envp);
	free(pathname);
	px_free_matrix(args);
	px_fail(7, input, 0, 127);
}

static void	px_run_progtwo(char *command, char **envp, int output, int pipex[])
{
	char	**args;
	char	*pathname;

	args = ft_split(command, ' ');
	if (!args)
		px_fail(8, output, 0, 1);
	pathname = px_get_pathname(args[0], envp);
	px_set_up_channel_progtwo(output, pipex);
	if (pathname)
		execve(pathname, args, envp);
	else
		execve(args[0], args, envp);
	free(pathname);
	px_free_matrix(args);
	px_fail(10, output, 0, 127);
}
