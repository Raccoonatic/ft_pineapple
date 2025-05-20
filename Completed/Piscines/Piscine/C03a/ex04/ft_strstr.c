/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:53:33 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/17 15:18:29 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	guida;
	int	guidb;

	guida = 0;
	if (!to_find[guida])
	{
		return (str);
	}
	while (str[guida])
	{
		guidb = 0;
		while ((str[guida + guidb] == to_find[guidb]) && to_find[guidb])
		{
			guidb++;
		}
		if (!to_find[guidb])
		{
			return (&str[guida]);
		}
		guida++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	char	*result;

	(void)arc;
	result = ft_strstr(wordy[1], wordy[2]);
	if (result == 0)
	{
		printf("No matches. Result: %s\n", result);
	}
	if (result != 0)
	{
		printf("We have a match! Result: %s\n", result);
	}
	return (0);
}*/
