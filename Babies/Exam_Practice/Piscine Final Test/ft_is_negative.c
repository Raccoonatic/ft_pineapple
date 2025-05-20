/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:29:33 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/25 18:39:05 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if(n < 0)
		write( 1, "N", 1);
	else
		write( 1, "P", 1);
}

#include <stdlib.h>
int main(int a, char *b[])
{
	ft_is_negative(atoi(b[1]));
	return (0);
}
