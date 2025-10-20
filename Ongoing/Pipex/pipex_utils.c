/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:18:16 by lde-san-          #+#    #+#             */
/*   Updated: 2025/10/18 20:13:32 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static char	*px_pathfind(char **dirs, char *temp_filename);
void		px_free_matrix(char **matrix);
void		px_set_up_channel_progone(char *input_file, int pipex[]);
void		px_set_up_channel_progtwo(char *output_file, int pipex[]);

char	*px_get_pathname(char *filename, char *envp[])
{
	char	**dirs;
	int		guide;
	char	*pathname;
	char	*temp_filename;

	if (ft_strchr(filename, '/'))
		return (ft_strdup(filename));
	guide = 0;
	while (envp[guide] && ft_strncmp(envp[guide], "PATH=", 5))
		guide++;
	if (!envp[guide])
		return (NULL);
	temp_filename = ft_strjoin("/", filename);
	dirs = ft_split(&envp[guide][5], ':');
	pathname = px_pathfind(dirs, temp_filename);
	free(temp_filename);
	px_free_matrix(dirs);
	if (!pathname)
		return (NULL);
	if (!access(pathname, F_OK))
		return (pathname);
	free(pathname);
	return (NULL);
}

void	px_free_matrix(char **matrix)
{
	int	guide;

	if (!matrix)
		return ;
	guide = 0;
	while (matrix[guide])
	{
		free(matrix[guide]);
		guide++;
	}
	free(matrix);
}

static char	*px_pathfind(char **dirs, char *temp_filename)
{
	int		guide;
	char	*pathname;

	if (!temp_filename || !dirs)
		return (NULL);
	guide = 0;
	pathname = ft_strjoin(dirs[guide], temp_filename);
	if (!pathname)
		return (NULL);
	while (access(pathname, F_OK) && dirs[guide])
	{
		guide++;
		if (!dirs[guide])
			break ;
		free(pathname);
		pathname = ft_strjoin(dirs[guide], temp_filename);
		if (!pathname)
			return (NULL);
	}
	return (pathname);
}

void	px_set_up_channel_progone(char *input_file, int pipex[])
{
	int	fd;

	fd = open(input_file, O_RDONLY);
	if (fd < 0)
		px_fail(1, 1);
	dup2(fd, 0);
	dup2(pipex[1], 1);
	close(pipex[0]);
	close(pipex[1]);
	close(fd);
}

void	px_set_up_channel_progtwo(char *output_file, int pipex[])
{
	int	fd;

	fd = open(output_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
		px_fail(11, 1);
	dup2(fd, 1);
	dup2(pipex[0], 0);
	close(pipex[0]);
	close(pipex[1]);
	close(fd);
}
