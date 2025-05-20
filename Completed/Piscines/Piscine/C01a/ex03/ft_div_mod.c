/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:06:47 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/10 17:38:27 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main( int argc, char *argv[])

{
	int	vara;
	int	varb;
	int	div;
	int	mod;

	(void)argc;
	vara = atoi(argv[1]);
	varb = atoi(argv[2]);
	ft_div_mod(vara, varb, &div, &mod);
	printf("The variables are:\n\nvar_a= %d. \nvar_b= %d.\n\n", vara, varb);
	printf("The result of dividing var_a by var_b is:\n %d.\n\n", div);
	printf("The the reminder of said division is:\n %d. \n", mod);
	if (mod != 0)
	{
		printf("\n\nAnd that is ok, \n\nDon't you worry child.");
		printf("\n\nGod loves all of y'all the same <3");
	}
	else
	{
		printf("\nPretty cool right?\n");
	}
	return (0);
}*/
