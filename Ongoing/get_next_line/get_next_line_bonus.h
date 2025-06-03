/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 22:39:01 by lde-san-          #+#    #+#             */
/*   Updated: 2025/06/03 12:25:11 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	char			letter;
	struct s_list	*tail;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*get_lines(t_list **head);
t_list	*racc_lstnew(char c);
size_t	racc_linesize(t_list *lst);
int		racc_findend(t_list **lst);
void	racc_delnode(t_list **lst, int clear_all);
int		racc_lstadd(t_list **lst, t_list *new);

#endif
