/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:27:14 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/02 18:51:02 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(int arc, char *wordy[])
{
	int	dividend;
	int	divisor;
	int	result;
	int	reminder;

	(void)arc;
	dividend = atoi(wordy[1]);
	divisor = atoi(wordy[2]);
	ft_div_mod(dividend, divisor, &result, &reminder);
	if (reminder != 0)
		printf("A Mapache divided %d by %d and got %d. With %d left.",
			dividend, divisor, result, reminder);
	else
		printf("A Mapache divided %d by %d and got %d. Reminder = %d",
			dividend, divisor, result, reminder);
	return (0);
}*/
