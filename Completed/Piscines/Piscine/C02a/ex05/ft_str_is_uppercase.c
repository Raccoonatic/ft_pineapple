/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:11:32 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/12 11:27:31 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

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
		if (i >= 65 && i <= 90)
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
	result = ft_str_is_uppercase(wordy[1]);
	if (result == 1)
	{
		printf("The result is 1. So your string_is_only_UPPERCASE or \"\"");
	}
	else if (result == 0)
	{
		printf("The result is 0. So your string_is_NOT_only_UPPERCASE");
	}
	else
	{
		printf("Something that went wrong is not right");
	}
	return (0);
}*/
