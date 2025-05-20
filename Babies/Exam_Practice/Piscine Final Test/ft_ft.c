/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:02:13 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 19:14:28 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>
int main (void)
{
	int a;

	a = 6;
	printf("Original value: %d\n", a);
	ft_ft(&a);
	printf("New value: %d\n", a);
}
