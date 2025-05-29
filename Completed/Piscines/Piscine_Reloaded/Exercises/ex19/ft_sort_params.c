/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:35:55 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/06 20:56:33 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char a);
/*{
	write(1, &a, 1);
}*/

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	swinger( char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_print_params(int arc, char *wordy[])
{
	int	guide_alpha;
	int	guide_beta;

	guide_alpha = 1;
	while (guide_alpha < arc)
	{
		guide_beta = 0;
		while (wordy[guide_alpha][guide_beta])
		{
			ft_putchar(wordy[guide_alpha][guide_beta]);
			guide_beta++;
		}
		ft_putchar('\n');
		guide_alpha++;
	}
}

int	main( int arc, char *wordy[])
{
	int	guide1;
	int	guide2;

	if (arc < 2)
		return (1);
	guide1 = 1;
	while (guide1 < arc)
	{
		guide2 = 1;
		while (guide2 < (arc - 1))
		{
			if (ft_strcmp (wordy[guide2], wordy[guide2 + 1]) > 0)
			{
				swinger(&wordy[guide2], &wordy[guide2 + 1]);
				guide2++;
			}
			else
				guide2++;
		}
		guide1++;
	}
	ft_print_params(arc, wordy);
	return (0);
}
