/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:18:16 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/16 22:23:21 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char *get_pathname(char *filename, char *envp[])
{
	char	**dirs;
	int		guide;
	char	*pathname;
	char	*temp_filename;

	if (ft_strchr(filename, '/'))
		return (ft_strdup(filename));
	temp_filename = ft_strjoin("/", filename);
	guide = 0;
	while (envp[guide] && ft_strncmp(envp[guide], "PATH=", 5))
		guide++;
	if (!envp[guide])
		return (NULL);
	dirs = ft_split(&envp[guide][5], ':');
	guide = 0;
	pathname = ft_strjoin(dirs[guide], temp_filename);
	while (dirs[guide] && access(pathname, F_OK))
	{
		free(pathname);
		pathname = ft_strjoin(dirs[++guide], temp_filename);
	}
	free(temp_filename);
	guide = 0;
	px_free_matrix(dirs);
	if (!access(pathname, F_OK | X_OK))
		return (pathname);
	return (NULL);
}

void	px_free_matrix(char **matrix)
{
	int	guide;

	guide = 0;
	while(matrix[guide])
	{
		free(matrix[guide]);
		guide++;
	}
	free(matrix);
}
