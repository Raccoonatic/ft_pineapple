/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:05:43 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/12 11:18:44 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	guide;
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	guide = 0;
	while (str[guide])
	{
		i = str[guide];
		if (i >= 97 && i <= 122)
		{
			guide++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	unsigned int	result;

	(void)arc;
	result = ft_str_is_lowercase(wordy[1]);
	if (result == 1)
	{
		printf("The result is 1. So your string_is_only_lowercase or \"\"");
	}
	else if (result == 0)
	{
		printf("The result is 0. So your string_is_NOT_only_lowercase");
	}
	else
	{
		printf("Something that went wrong is not right");
	}
	return (0);
}*/
