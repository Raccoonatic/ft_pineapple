/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:42:24 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/07 20:34:21 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	err_mssg( int arc, char *wordy)
{
	int	file;

	if (arc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (arc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	file = open(wordy, O_RDONLY);
	if (file == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}

int	main( int arc, char *wordy[])
{
	char	guide;
	int		file;

	if (err_mssg(arc, wordy[1]) == 1)
		return (1);
	file = open(wordy[1], O_RDONLY);
	if (file == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	while (read (file, &guide, 1))
		write(1, &guide, 1);
	close (file);
	return (0);
}
