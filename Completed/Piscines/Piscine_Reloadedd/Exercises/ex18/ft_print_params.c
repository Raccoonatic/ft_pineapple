/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:22:05 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/04 20:34:13 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char a);
/*{
	write(1, &a, 1);
}*/

int	main( int arc, char *wordy[])
{
	int	guide_alpha;
	int	guide_beta;

	if (arc < 2)
		return (1);
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
	return (0);
}
