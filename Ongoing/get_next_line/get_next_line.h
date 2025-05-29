/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:39:01 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/29 13:11:24 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

	#ifndef BUFFER_SIZE
	# define BUFFER_SIZE 42
	#endif

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

char	*get_next_line(int fd);

typedef struct s_list
{
	char			*letter;
	letter = NULL;
	struct s_list *next;
}	t_list;

#endif
