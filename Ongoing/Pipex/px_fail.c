/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   px_fail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:03:11 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/17 11:45:06 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void px_fail(int error_index, void *release1, void *release2)
{
	if (error_index == 0)
		perror("Incorrect Argument count");
	else if (error_index == 1)
	{
		perror("Bad files. f_open Error");
		px_closing_list((int)(*release1), (int)(*release2));
	}
	else if (error_index == 2)
	{
		perror("f_pipe Error");
		px_closing_list((int)(*release1), (int)(*release2));
	}
	exit(EXIT_FAILURE);
}

static void px_closing_list(int fd_one, int fd_two);
{
	if (fd_one)
		close(fd_one);
	if (fd_two)
		close(fd_two);
}
