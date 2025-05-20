/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:30:52 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 15:42:49 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	int i;
	char a; 

	i = 1;
	a = 'a';
	while (a <= 'z')
	{
		write( 1, &a, 1);
		a += i;
	}
}
int main (void)
{
	ft_print_alphabet();
	return (0);
}
