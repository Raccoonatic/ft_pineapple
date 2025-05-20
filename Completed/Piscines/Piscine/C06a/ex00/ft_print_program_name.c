/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:57:41 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/19 22:05:59 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char *wordy[])
{
	int	guide;

	if (arc > 1)
	{
		return (1);
	}
	guide = 0;
	while (wordy[0][guide])
	{
		write(1, &wordy[0][guide], 1);
		guide++;
	}
	write(1, "\n", 1);
	return (0);
}
