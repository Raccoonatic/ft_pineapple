/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:07:41 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/09 19:49:54 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

unsigned int     str_len(char *base);
void    ft_putnbr_base(uintptr_t nbr, char *base);
void 	recursive_conversion(uintptr_t nbr, char *base);
unsigned int     base_is_valid(char *base);

void	ft_putnbr_base(uintptr_t nbr, char *base)
{
	write(1, "0x", 2);
        if (base_is_valid(base) > 0)
                return;
	if (nbr < 0)
	{	
		write( 1, "-", 1);
		nbr *= -1;
	}
	recursive_conversion(nbr, base);
}

void	recursive_conversion(uintptr_t nbr, char *base)
{
	if (nbr >= str_len(base))
	{
		recursive_conversion(nbr / str_len(base), base);
		recursive_conversion(nbr % str_len(base), base);
	}
	else
		write(1, &base[nbr], 1);
}


unsigned int	base_is_valid(char *base)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if(str_len(base) <= 1)
		return (1);
	if(base == 0)
		return (1);
	while(base[i])
	{
		if(base[i] == '-' || base[i] == '+')
			return (1);
		j = 0;
		while(base[j])
		{
			if(base[i] == base[j] && i != j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

unsigned int	str_len(char *base)
{
	unsigned int i;

	i = 0;
	while(base[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <stdlib.h>

int	main (int a, char*b[])
{
	(void)a;
	void *p = &b[1];
//	ft_putnbr_base((unsigned int)(atoi(b[1])), b[2]);
    ft_putnbr_base((uintptr_t)p, b[2]);
	printf("\n%x\n", 16);
	printf("%x\n", -16);
	printf("%x\n", -1);
	printf("%x\n", 0);
	printf("%p\n",p);
	printf("%X\n", 200);
//    printf("%d,%d\n", 2);
	return (0);
}
