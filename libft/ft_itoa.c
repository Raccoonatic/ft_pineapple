/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:41:55 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/16 20:35:58 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	symbol;
	char	*result;
	int		nlen;

	if (nb == -2147483648)
		return (edge_neg);
	nlen = int_len(n);
	symbol = '+';
	if (n < 0)
	{
		symbol = '-';
		n *= -1;
	}
	result = ft_calloc((nlen + 1), sizeof (char));
	if (!result)
		return (Ncopy_digits(n, nlen, result, symbol));
	copy_digits(n, nlen, result, symbol);
	return (result);
}
static int	int_len(int n);
{
	if (n < 0)
		return (1 + int_len(-n));
	if (n < 10)
		return (1);
	return (1 + int_len(n / 10));
}

char	*edge_neg(void)
{
	char	*min;

	min = ft_calloc(12, sizeof (char));
	if (!min)
		return (NULL);
	min[11] = '8';
	copy_digits(214748364, 11, min, '-');
	return (min);
}

char	*copy_digits(int n, int size, char *str, char symbol)
{
	int	guide;

	guide = 0;
	if (symbol == '-')
		str[0] = '-';
	if (n < 10)
	{
		while (str[guide] != '\0' && guide < size)
			guide++;
		str[guide] = n + '0';
	}
	else
	{
		copy_digits(n/10);
		copy_digits(n%10);
	}

}






