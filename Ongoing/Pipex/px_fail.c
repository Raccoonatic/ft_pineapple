/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px_fail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:03:11 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/19 22:31:59 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	px_fail_sixty_nine(int errcode);
void		px_closing_list(int fd_one, int fd_two);

void	px_fail(int errcode, int release1, int release2, int exit_code)
{
	if (errcode == 0)
		racc_print(2, MINT"%e Incorrect Argument Count\n"RSET, "nope");
	if (errcode == 6 || errcode == 9)
		px_fail_sixty_nine(errcode);
	else if (errcode == 1)
		perror(BLOD"Error"PURP" f_open"RSET);
	else if (errcode == 2)
		perror(BLOD"Error"PURP" f_pipe"RSET);
	else if (errcode == 3)
		perror(BLOD"Error"PURP" f_fork"B_WI" one"RSET);
	else if (errcode == 4)
		perror(BLOD"Error"PURP" f_fork"B_WI" two"RSET);
	else if (errcode == 5)
		perror(BLOD"Error"NEOR" v_args"PURP" f_ft_split"LIME" Prog_one"RSET);
	else if (errcode == 7)
		perror(BLOD"Error"PURP" f_execve"LIME" Prog_one"B_WI" can't run"RSET);
	else if (errcode == 8)
		perror(BLOD"Error"NEOR" v_args"PURP" f_ft_split"LIME" Prog_two"RSET);
	else if (errcode == 10)
		perror(BLOD"Error"PURP" f_execve"LIME" Prog_two"B_WI" can't run"RSET);
	racc_print(1, BABY"%e Usage: ./pipex infile cmd1 cmd2 outfile"RSET, "racc");
	racc_print(1," %e\n", "racc");
	px_closing_list(release1, release2);
	exit(exit_code);
}

static void	px_fail_sixty_nine(int errcode)
{
	racc_print(2, BLOD"Error"NEOR" v_pathname");
	if (errcode == 6)
		perror(" f_get_pathname"B_WI" child "LIME"Prog_one"RSET);
	else if (errcode == 9)
		perror(PURP" f_get_pathname"B_WI" child"LIME" Prog_two"RSET);
}

void	px_closing_list(int fd_one, int fd_two)
{
	if (fd_one > 2)
		close(fd_one);
	if (fd_two > 2)
		close(fd_two);
}
