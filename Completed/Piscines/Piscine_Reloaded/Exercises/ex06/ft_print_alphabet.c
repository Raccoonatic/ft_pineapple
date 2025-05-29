/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:00:53 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/01 20:52:09 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);
/*{
	write(1, &a, 1);
}*/

void	ft_print_alphabet(void)
{
	int		guide;
	char	letter;

	guide = 0;
	letter = 'a';
	while (guide < 26)
	{
		ft_putchar (letter + guide);
		guide++;
	}
}
/*int	main(void)
{
	ft_print_alphabet ();
	return (0);
}*/
