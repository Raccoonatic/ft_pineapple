/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:10:50 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/19 22:19:46 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "./libft/libft.h"
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <errno.h>

# define RSET	"\033[0m" 
# define B_WI	"\033[1;37m"
# define BLAK	"\033[38;2;0;0;0m"
# define LIME	"\033[38;2;0;255;0m"
# define BABY	"\033[38;2;0;255;247m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define PURP	"\033[1;38;2;174;5;252m"
# define NEOR	"\033[3m\033[38;2;255;153;51m"
# define MINT	"\033[1;38;2;55;250;133;48;2;0;0;0m"

char	*px_get_pathname(char *filename, char *envp[]);
void	px_free_matrix(char **matrix);
void	px_closing_list(int fd_one, int fd_two);
void	px_set_up_channel_progone(int input, int pipex[]);
void	px_set_up_channel_progtwo(int output, int pipex[]);
void	px_fail(int errcode, int release1, int release2, int exit_code);

#endif
