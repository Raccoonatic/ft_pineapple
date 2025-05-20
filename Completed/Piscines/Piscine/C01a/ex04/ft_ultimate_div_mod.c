/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:43:38 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/10 18:52:24 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	freeza;
	int	freezb;

	freeza = *a;
	freezb = *b;
	*a = freeza / freezb;
	*b = freeza % freezb;
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main( int argc, char *argv[])
{
	int	vara;
	int	varb;

	(void)argc;
	vara = atoi(argv[1]);
	varb = atoi(argv[2]);
	printf("The variables are:\n\nvar_a= %d. \nvar_b= %d.\n\n", vara, varb);
	ft_ultimate_div_mod(&vara, &varb);
	printf("The result of dividing var_a by var_b is:\n %d.\n\n", vara);
	printf("The the reminder of said division is:\n %d. \n", varb);
	if (varb != 0)
	{
		printf("\n\nAnd that is ok, \n\nDon't you worry child.");
		printf("\n\nGod loves all of y'all the same <3\n");
	}
	else
	{
		printf("\nPretty cool right?\n");
	}
	return (0);
}*/
