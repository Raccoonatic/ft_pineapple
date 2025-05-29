/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:42:17 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/04 19:54:18 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	guide;

	guide = 0;
	while (str[guide])
		guide++;
	return (guide);
}
/*
int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_strlen(wordy[1]);
	printf("%d\n", result);
	return (0);
}*/
