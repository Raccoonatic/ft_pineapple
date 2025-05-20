/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:15:39 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 19:28:52 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int main (void)
{
	int a;
	int *p1;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;

	a = 6;
	p1 = &a;
       	p2 = &p1;
        p3 = &p2;
        p4 = &p3;
        p5 = &p4;
        p6 = &p5;
        p7 = &p6;
        p8 = &p7;
	a = 6;
	printf("Original value: %d\n", a);
	ft_ultimate_ft(&p8);
	printf("New value: %d\n", a);
}
