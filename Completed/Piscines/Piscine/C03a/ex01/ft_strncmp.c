/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:39:13 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/16 19:47:42 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	guide;
	int				result;

	guide = 0;
	while (s1[guide] && s1[guide] == s2[guide] && guide < n)
	{
		guide++;
	}
	if (guide == n)
	{
		return (0);
	}
	result = s1[guide] - s2[guide];
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_strncmp(&wordy[1][0], &wordy[2][0], atoi(wordy[3]));
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
