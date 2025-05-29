/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:58:02 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/02 18:23:03 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main(int arc, char *wordy[])
{
	int	vessel_alpha;
	int	vessel_beta;

	(void)arc;
	vessel_alpha = atoi(wordy[1]);
	vessel_beta = atoi(wordy[2]);
	printf("Alpha contains %d & Beta has %d \n",
		vessel_alpha, vessel_beta);
	ft_swap(&vessel_alpha, &vessel_beta);
	printf("But a Mapache came by, and suddenly, Alpha is %d & Beta is %d!",
		vessel_alpha, vessel_beta);
	return (0);
}*/
