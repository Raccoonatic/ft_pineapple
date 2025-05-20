/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:08:17 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/10 16:08:34 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	storage;

	storage = *a;
	*a = *b;
	*b = storage;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	vara;
	int	varb;

	(void)argc;
	varb = atoi(argv[2]);
	vara = atoi(argv[1]);
	printf("\nThe original variables were: %d & %d \n", vara, varb);
	ft_swap(&vara, &varb);
	printf("\nNonetheless, with the swing of a wand,\n");
	printf("Presto!\nCambio!: %d & %d\n\n", vara, varb);
	return (0);
}*/
