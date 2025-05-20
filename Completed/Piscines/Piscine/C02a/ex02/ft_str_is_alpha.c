/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:27:10 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/11 23:28:36 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
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
	result = ft_str_is_alpha(wordy[1]);
	if (result == 1)
	{
		printf("The result is 1. So your string_is_only_alpha or \"\"");
	}
	else if (result == 0)
	{
		printf("The result is 0. So your string_is_NOT_only_alpha");
	}
	else
	{
		printf("Something that went wrong is not right");
	}
	return (0);
}*/
