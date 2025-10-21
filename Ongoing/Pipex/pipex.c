/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:19:51 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/21 21:58:58 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	px_run_progone(char **wordy, char **envp, int pipex[]);
static void	px_run_progtwo(char **wordy, char **envp, int pipex[]);

int	main(int arc, char *wordy[], char *envp[])
{
	pid_t	pid_one;
	pid_t	pid_two;
	int		pipex[2];
	int		status;

	if (arc != 5)
		px_fail(0, 1);
	if (pipe(pipex) == -1)
		px_fail(2, 1);
	pid_one = fork();
	if (pid_one < 0)
		px_fail(3, 1);
	if (pid_one == 0)
		px_run_progone(wordy, envp, pipex);
	pid_two = fork();
	if (pid_two < 0)
		px_fail(4, 1);
	if (pid_two == 0)
		px_run_progtwo(wordy, envp, pipex);
	close(pipex[0]);
	close(pipex[1]);
	waitpid(pid_one, NULL, 0);
	waitpid(pid_two, &status, 0);
	return (status >> 8);
}

static void	px_run_progone(char **wordy, char **envp, int pipex[])
{
	char	**args;
	char	*pathname;

	if (wordy[2][0])
	{
		px_set_up_channel_progone(wordy[1], pipex);
		args = ft_split(wordy[2], ' ');
		if (!args)
			px_fail(5, 1);
		pathname = px_get_pathname(args[0], envp);
		if (pathname && ft_strchr(args[0], '/'))
			execve(args[0], args, envp);
		else if (pathname && !(ft_strchr(args[0], '/')))
			execve(pathname, args, envp);
		if (pathname)
			free(pathname);
		px_free_matrix(args);
		px_fail(7, 127);
	}
	execve(wordy[2], &wordy[2], envp);
	px_fail(6, 1);
}

static void	px_run_progtwo(char **wordy, char **envp, int pipex[])
{
	char	**args;
	char	*pathname;

	if (wordy[3][0])
	{
		px_set_up_channel_progtwo(wordy[4], pipex);
		args = ft_split(wordy[3], ' ');
		if (!args)
			px_fail(8, 1);
		pathname = px_get_pathname(args[0], envp);
		if (pathname && ft_strchr(args[0], '/'))
			execve(args[0], args, envp);
		else if (pathname && !(ft_strchr(args[0], '/')))
			execve(pathname, args, envp);
		if (pathname)
			free(pathname);
		px_free_matrix(args);
		px_fail(10, 127);
	}
	execve(wordy[3], &wordy[3], envp);
	open(wordy[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	px_fail(9, 1);
}
