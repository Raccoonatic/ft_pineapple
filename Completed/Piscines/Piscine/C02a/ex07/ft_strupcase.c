/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:42:42 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/16 14:34:33 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	guide;

	guide = 0;
	while (str[guide])
	{
		if (str[guide] >= 97 && str[guide] <= 122)
		{
			str[guide] = str[guide] - 32;
		}
		guide++;
	}
	str[guide] = '\0';
	return (str);
}
/*
#include <unistd.h>

int	main( int arc, char *wordy[])
{
	unsigned int	guide;

	(void)arc;
	guide = 0;
	ft_strupcase(wordy[1]);
	while (wordy[1][guide])
	{
		write(1, &wordy[1][guide], 1);
		guide++;
	}
}*/
