/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:21:27 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/18 17:29:08 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	guide;

	guide = 0;
	while (str[guide])
	{
		write(1, &str[guide], 1);
		guide++;
	}
}
/*
int	main( int arc, char *wordy[])
{
	(void)arc;
	ft_putstr(wordy[1]);
	return (0);
}*/
