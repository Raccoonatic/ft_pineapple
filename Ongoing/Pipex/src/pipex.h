/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:10:50 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/18 20:15:00 by lde-san-         ###   ########.fr       */
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

void	px_free_matrix(char **matrix);
void	px_closing_list(int fd_one, int fd_two);
void	px_set_up_channel_progone(int input, int pipex[]);
void	px_set_up_channel_progtwo(int output, int pipex[]);
void	px_fail(int errcode, int release1, int release2, t_fate destiny);

#endif
