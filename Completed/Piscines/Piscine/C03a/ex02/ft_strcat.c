/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:56:51 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/16 21:28:23 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	guide_alpha;
	int	guide_beta;

	guide_alpha = 0;
	while (dest[guide_alpha])
	{
		guide_alpha++;
	}
	guide_beta = 0;
	while (src[guide_beta])
	{
		dest[guide_alpha] = src[guide_beta];
		guide_alpha++;
		guide_beta++;
	}
	dest[guide_alpha] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main(int arc, char *wordy[])
{
	int		guide;
	char	vessel[100];

	(void)arc;
	guide = 0;
	while (wordy[1][guide])
	{
		vessel[guide] = wordy[1][guide];
		guide++;
	}
	vessel[guide] = '\0';
	guide = 0;
	ft_strcat(vessel, wordy[2]);
	while (vessel[guide])
	{
		write(1, &vessel[guide], 1);
		guide++;
	}
	return (0);
}*/
