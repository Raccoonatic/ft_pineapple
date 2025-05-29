/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:05:47 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/17 21:19:09 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}
/*
#include <stdio.h>

int main( int arc, char *wordy[])
{
	unsigned int result;

	(void)arc;
	result = ft_strlen(wordy[1]);
	printf("Your string was %u characters long\n", result);
	return (0);
}*/
