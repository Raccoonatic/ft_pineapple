/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:45:54 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/21 21:08:07 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char *wordy[])
{
	int	guide_alpha;
	int	guide_beta;

	guide_alpha = 1;
	while (guide_alpha < arc)
	{
		guide_beta = 0;
		while (wordy[arc - guide_alpha][guide_beta])
		{
			write(1, &wordy[arc - guide_alpha][guide_beta], 1);
			guide_beta++;
		}
		write(1, "\n", 1);
		guide_alpha++;
	}
	return (0);
}
