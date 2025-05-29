/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:55:30 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/04 20:17:34 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main( int arc, char *wordy[])
{
	int	result;

	(void)arc;
	result = ft_strcmp( wordy[1], wordy[2]);
	if (result < 0)
		printf("%s is smaller than %s\n", wordy[1], wordy[2]);
	else if (result == 0)
		printf("%s is the same as %s\n", wordy[1], wordy[2]);
	else if (result > 0)
		printf("%s is bigger than %s\n", wordy[1], wordy[2]);
	else
		printf("wtf?...");
	return (0);
}*/
