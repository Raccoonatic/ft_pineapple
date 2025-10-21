/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px_fail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:03:11 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/21 22:04:08 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	px_fail_sixty_nine(int errcode);
static void	px_fail_system(int errcode);
static void	px_fail_zero(void);

void	px_fail(int errcode, int exit_code)
{
	if (errcode == 0)
		px_fail_zero();
	if (errcode == 11 || (errcode > 0 && errcode < 5))
		px_fail_system(errcode);
	if (errcode == 6 || errcode == 9)
		px_fail_sixty_nine(errcode);
	if (errcode == 5)
		perror(BLOD"Error"NEOR" v_args"PURP" f_ft_split"LIME" Prog_one"RSET);
	else if (errcode == 7)
		perror(BLOD"Error"PURP" f_execve"LIME" Prog_one"B_WI" can't run"RSET);
	else if (errcode == 8)
		perror(BLOD"Error"NEOR" v_args"PURP" f_ft_split"LIME" Prog_two"RSET);
	else if (errcode == 10)
		perror(BLOD"Error"PURP" f_execve"LIME" Prog_two"B_WI" can't run"RSET);
	exit(exit_code);
}

static void	px_fail_zero(void)
{
	racc_print(2, MINT"%e Incorrect Argument Count\n"RSET, "nope");
	racc_print(2, BABY"%e Usage: ./pipex infile cmd1 cmd2 outfile"RSET, "racc");
	racc_print(2, " %e\n", "racc");
	return ;
}

static void	px_fail_system(int errcode)
{
	if (errcode == 1)
		perror(BLOD"Error"PURP" f_open"LIME" Prog_one"RSET);
	if (errcode == 11)
		perror(BLOD"Error"PURP" f_open"LIME" Prog_two"RSET);
	else if (errcode == 2)
		perror(BLOD"Error"PURP" f_pipe"RSET);
	else if (errcode == 3)
		perror(BLOD"Error"PURP" f_fork"B_WI" one"RSET);
	else if (errcode == 4)
		perror(BLOD"Error"PURP" f_fork"B_WI" two"RSET);
	return ;
}

static void	px_fail_sixty_nine(int errcode)
{
	int	delay;

	delay = 0;
	if (errcode == 6)
	{
		racc_print(2, BLOD"Error"NEOR" v_pathname");
		perror(PURP" f_get_pathname"B_WI" child "LIME"Prog_one"RSET);
		racc_print(2, BABY"%e Usage: ./pipex infile ", "racc");
		racc_print(2, "cmd1 cmd2 outfile"RSET" %e\n", "racc");
	}
	else if (errcode == 9)
	{
		while (delay < 100000)
			delay++;
		racc_print(2, BLOD"Error"NEOR" v_pathname");
		perror(PURP" f_get_pathname"B_WI" child"LIME" Prog_two"RSET);
		racc_print(2, BABY"%e Usage: ./pipex infile ", "racc");
		racc_print(2, "cmd1 cmd2 outfile"RSET" %e\n", "racc");
	}
	return ;
}
