/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 22:51:04 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/09 16:54:38 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_press_comb(char a)
{
	char	b;
	char	c;

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	char	a;

	a = '0';
	ft_press_comb(a);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
