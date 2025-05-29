/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:55:33 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/10 20:10:48 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	guide;	

	guide = 0;
	while (str[guide])
	{
		write(1, &str[guide], 1);
		guide++;
	}
}
/*
int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putstr(argv[1]);
	return (0);
}*/
