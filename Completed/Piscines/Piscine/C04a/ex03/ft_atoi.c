/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:37:26 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/18 21:59:07 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str);
int	real_atoi(int count_signs, char *vessel);

int	ft_atoi(char *str)
{
	int		count_signs;
	int		i;
	int		guide;
	char	vessel[11];

	count_signs = 0;
	guide = 0;
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_signs++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		vessel[guide++] = str[i];
		i++;
	}
	vessel[guide] = '\0';
	return (real_atoi(count_signs, &vessel[0]));
}

int	real_atoi(int count_signs, char *vessel)
{
	int	sign;
	int	result;
	int	guide;

	sign = 1;
	guide = 0;
	result = 0;
	if ((count_signs % 2) != 0)
	{
		sign = -sign;
	}
	while (vessel[guide])
	{
		result = (result * 10) + (vessel[guide] - '0');
		guide++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(int arc, char *wordy[])
{
	(void)arc;
	printf("%d\n", ft_atoi(wordy[1]));
	return (0);
}*/
