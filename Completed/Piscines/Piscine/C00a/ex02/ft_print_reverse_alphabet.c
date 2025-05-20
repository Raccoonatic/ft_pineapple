/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:32:31 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/07 19:58:28 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write (1, &letter, 1);
		letter--;
	}
}
/*
int	main(void)

{
	ft_print_reverse_alphabet();
	write (1, "\n", 1);
}*/
