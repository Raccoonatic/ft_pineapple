/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:19:51 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/18 20:06:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	px_waiting_room(char **wordy, char **envp, int input, int output);
static void	px_run_progone(char *command, char **envp, int input, int pipex[]);
static void	px_run_progtwo(char *command, char **envp, int output, int pipex[]);

int	main(int arc, char *wordy[], char *envp[])
{
	int	in_file;
	int	out_file;

	if (arc != 5)
		px_fail(0, 0, 0);
	in_file = open(wordy[1], O_RDONLY);
	out_file = open(wordy[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (in_file < 3 || out_file < 3)
		px_fail(1, in_file, out_file);
	px_waiting_room(wordy, envp, in_file, out_file);
	px_closing_list(in_file, out_file);
	return (0);
}

static void	px_waiting_room(char **wordy, char **envp, int input, int output)
{
	pid_t	pid_one;
	pid_t	pid_two;
	int		pipex[2];

	if (pipe(pipex) == -1)
		px_fail(2, input, output);
	pid_one = fork();
	if (pid_one < 0)
		px_fail(3, input, output);
	else if (pid_one > 0 && !(close(*output)))
		px_run_progone(wordy[2], envp, input, pipex);
	pid_two = fork();
	if (pid_two < 0)
	{
		wait(pid_one);
		px_fail(4, input, output);
	}
	else if (pid_two > 0 && !(close(*input)))
		px_run_progtwo(wordy[3], envp, output, pipex);
	waitpid(pid_one, NULL, 0);
	waitpid(pid_two, NULL, 0);
	return (0);
}

static void	px_run_progone(char *command, char **envp, int input, int pipex[])
{
	char	**args;
	char	*pathname;

	args = ft_split(command, ' ');
	if (!args)
		px_fail(5, input, 0);
	pathname = px_get_pathname(args[0], envp);
	if (!pathname)
	{
		px_free_matrix(args);
		px_fail(6, input, 0);
	}
	px_set_up_channel_progone(input, pipex);
	if (execve(pathname, args, envp) == -1)
	{
		free(pathname);
		px_free_matrix(args);
		px_fail(7, input, 0);
	}
}

static void	px_run_progtwo(char *command, char **envp, int output, int pipex[])
{
	char	**args;
	char	*pathname;

	args = ft_split(command, ' ');
	if (!args)
		px_fail(8, output, 0);
	pathname = px_get_pathname(args[0], envp);
	if (!pathname)
	{
		px_free_matrix(args);
		px_fail(9, output, 0);
	}
	px_set_up_channel_progtwo(output, pipex);
	if (execve(pathname, args, envp) == -1)
	{
		free(pathname);
		px_free_matrix(args);
		px_fail(10, output, 0);
	}
}
