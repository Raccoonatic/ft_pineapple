/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:40:44 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/17 13:50:21 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	guide_alpha;
	unsigned int	guide_beta;

	guide_alpha = 0;
	while (dest[guide_alpha])
	{
		guide_alpha++;
	}
	guide_beta = 0;
	while (src[guide_beta] && guide_beta < nb)
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
#include <stdlib.h>

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
	if ((atoi(wordy[3])) < 0)
	{
       		write(1, "Sorry, only positive vibes allowed", 34);
		return (1);
	}	
	ft_strncat(vessel, wordy[2], atoi(wordy[3]));
	while (vessel[guide])
	{
		write(1, &vessel[guide], 1);
		guide++;
	}
	return (0);
}*/
