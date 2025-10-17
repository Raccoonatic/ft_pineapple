/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:57:03 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/17 11:45:01 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int arc, char *wordy[], char *envp[])
{
	int	in_file;
	int	out_file;
	int *pipex[2];

	if (arc != 5)
		px_fail(0, NULL, NULL);
	in_file = open(wordy[1], O_RDONLY);
	out_file = open(wordy[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (in_file < 3 || out_file < 3)
		px_fail(1, &in_file, &out_file);
	if(pipe(pipex) == -1)
		px_fail(2, &in_file, &out_file);
}
