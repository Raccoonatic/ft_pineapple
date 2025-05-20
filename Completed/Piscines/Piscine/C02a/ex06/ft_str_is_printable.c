/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:40:33 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/16 13:56:32 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

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
		if (i >= 32 && i <= 126)
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

//int	main(int arc, char *wordy[])
int	main(void)
{
	unsigned int	result;
	char test[2] = "\n";

//	(void)arc;
//	result = ft_str_is_printable(wordy[1]);
	result = ft_str_is_printable(test);
	if (result == 1)
	{
		printf("The result is 1. So your string_is_only_printables or \"\"");
	}
	else if (result == 0)
	{
		printf("The result is 0. So your string_is_NOT_only_printables");
	}
	else
	{
		printf("Something that went wrong is not right");
	}
	return (0);
}*/
