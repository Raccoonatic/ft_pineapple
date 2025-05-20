/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 10:45:21 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/07 20:03:50 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 97;
	while (letter <= 122)
	{
		write (1, &letter, 1);
		letter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	write (1, "\n", 1);
	return (0);
}*/
