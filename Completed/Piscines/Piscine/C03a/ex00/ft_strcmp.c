/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:34:40 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/16 16:18:30 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	guide;
	int	result;

	guide = 0;
	while (s1[guide] && s1[guide] == s2[guide])
	{
		guide++;
	}
	result = s1[guide] - s2[guide];
	return (result);
}
/*
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_strcmp(wordy[1], wordy [2]);
	if (result < 0)
	{
		printf("The first string is less than the second one"
			". Result = %d", result);
	}
	else if (result == 0)
	{
		printf("They are the same string. Result = %d", result);
	}
	else if (result > 0)
	{
		printf("The first string is greater than the second one"
			". Result = %d", result);
	}
	return (0);
}*/
