/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:31:20 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/26 12:38:19 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	return(i);
}

int main( int a, char *b[])
{
	(void)a;
	printf("The string is %d characters long.\n", ft_strlen(&b[1][0]));
	return (0);
}
