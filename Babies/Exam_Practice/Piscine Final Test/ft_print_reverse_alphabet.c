/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:43:54 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 15:45:25 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	int i;
	char a; 

	i = 1;
	a = 'z';
	while (a >= 'a')
	{
		write( 1, &a, 1);
		a -= i;
	}
}
int main (void)
{
	ft_print_reverse_alphabet();
	return (0);
}
