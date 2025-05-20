/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:52:27 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 22:04:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main (int a, char *b[])
{
	(void)a;
	int div;	
	int mod;
	ft_div_mod(atoi(b[1]), atoi(b[2]), &div, &mod);
	printf("You asked me to divide %d by %d\n", atoi(b[1]), atoi(b[2]));
	printf("So I give you %d. Btw, from that division a %d remains.\n", div, mod);
	return (0);
}
