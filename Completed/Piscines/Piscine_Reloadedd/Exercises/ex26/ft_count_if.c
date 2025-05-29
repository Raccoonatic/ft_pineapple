/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:54:55 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/07 19:18:04 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	guide;
	int	result;

	guide = 0;
	result = 0;
	while (tab[guide])
	{
		if (f(tab[guide]) == 1)
			result++;
		guide++;
	}
	return (result);
}
/*
int	func(char *str)
{
	int	result;

	result = 0;
	if (str[0] == 'P')	
		result = 1;
	return (result);
}

int	main ( int arc, char *wordy[])
{
	int result;

	(void)arc;

	result = ft_count_if(&wordy[0],func);
	printf("%d\n", result);
	return(0);
}*/
