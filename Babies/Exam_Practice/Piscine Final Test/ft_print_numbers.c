/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:28 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 18:28:21 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	int i;
	char a; 

	i = 1;
	a = '0';
	while (a <= '9')
	{
		write( 1, &a, 1);
		a += i;
	}
}
int main (void)
{
	ft_print_numbers();
	return (0);
}
