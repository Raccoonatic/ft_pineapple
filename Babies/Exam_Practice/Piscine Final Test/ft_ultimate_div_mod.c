/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:07:07 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 22:12:51 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;
	int tempo;

	temp = *a / *b;
	tempo = *a % *b;
	*a = temp;
	*b = tempo;
}

int main (int a, char *b[])
{
	(void)a;
	int div = atoi(b[1]);	
	int mod = atoi(b[2]);
	ft_ultimate_div_mod(&div, &mod);
	printf("You asked me to divide %d by %d\n", atoi(b[1]), atoi(b[2]));
	printf("So I give you %d. Btw, from that division a %d remains.\n", div, mod);
	return (0);
}
