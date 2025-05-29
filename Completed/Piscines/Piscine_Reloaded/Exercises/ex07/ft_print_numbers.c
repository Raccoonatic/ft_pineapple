/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:39:59 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/02 16:50:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);
/*{
	write(1, &a, 1);
}*/

void	ft_print_numbers(void)
{
	char	zero;

	zero = '/';
	while (zero != '9')
	{
		ft_putchar (++zero);
	}
}
/*int	main(void)
{
	ft_print_numbers ();
	return (0);
}*/
