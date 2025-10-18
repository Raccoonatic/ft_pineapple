/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px_fail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:03:11 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/18 20:07:44 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	px_closing_list(int fd_one, int fd_two);

void	px_fail(int errcode, int release1, int release2)
{
	if (errcode == 0)
		perror("Incorrect Argument count");
	else if (errcode == 1)
		perror("Error f_open");
	else if (errcode == 2)
		perror("Error f_pipe");
	else if (errcode == 3)
		perror("Error f_fork one");
	else if (errcode == 4)
		perror("Error f_fork two");
	else if (errcode == 5)
		perror("Error v_args f_ft_split Prog_one");
	else if (errcode == 6)
		perror("Error v_pathname f_get_pathname child Prog_one");
	else if (errcode == 7)
		perror("Error f_execve Prog_one couldn't run");
	else if (errcode == 8)
		perror("Error v_args f_ft_split Prog_two");
	else if (errcode == 9)
		perror("Error v_pathname f_get_pathname child Prog_two");
	else if (errcode == 10)
		perror("Error f_execve Prog_two couldn't run");
	px_closing_list(release1, release2);
	exit(EXIT_FAILURE);
}

void	px_closing_list(int fd_one, int fd_two)
{
	if (fd_one > 2)
		close(fd_one);
	if (fd_two > 2)
		close(fd_two);
}
