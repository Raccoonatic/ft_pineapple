/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:21:29 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/22 19:18:20 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char test_isalpha(int a);

int	main(int arc, char *wordy[])
{
	if (arc < 3)
	{
		printf("%s", "insufficient arguments");
		return (0);
	}
	if (!strcmp(wordy[1], "ft_isalpha"))
	{
		if (test_isalpha(atoi(wordy[2])) == 'K')
			printf("\033[31mtest 1: Cagaste\033[0m\n");
		else
			printf("\033[32mtest 1: Todo fino\033[0m\n");
		return(0);
	}
	printf("\033[36mFunction not found\033[0m\n");
	return(0);
}

char test_isalpha(int a)
{
	if(isalpha(a) == ft_isalpha(a))
		return('K');
	else
		return('O');
}
		
