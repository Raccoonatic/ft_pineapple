/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:08:38 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/06 20:01:35 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	guide;

	guide = 0;
	while (str[guide])
		guide++;
	return (guide);
}

char	*ft_strdup(char *src)
{
	char	*dupped;
	int		guide;

	guide = 0;
	dupped = malloc ((ft_strlen(src) + 1) * sizeof(char));
	if (!dupped)
		return (NULL);
	while (src[guide])
	{
		dupped[guide] = src[guide];
		guide++;
	}
	dupped[guide] = '\0';
	return (dupped);
}
/*
int	main(int arc, char *wordy[])
{	
	char	*clone;
	if(arc < 2)
		return(1);
	printf("The string is %s\n", wordy[1]);
	clone = ft_strdup(wordy[1]);
	printf("The dupped string is %s\n", clone);
	free(clone);
	return(0);
}*/
