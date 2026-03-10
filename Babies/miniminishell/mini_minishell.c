/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_minishell.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:51:00 by lde-san-          #+#    #+#             */
/*   Updated: 2026/02/19 14:32:51 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libft/includes/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

# define RSET	"\033[0m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define MINT	"\033[1;38;2;55;250;133m"

typedef struct stat	t_stat;

void	miso_free_matrix(char **matrix)
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
	return ;
}

void	miso_checknfree(void *check1, char **check2, void *free1, char **free2)
{
	if (check1 || check2)
		return ;
	perror(BLOD"PROMPT"RSET);
	if (free1)
		free(free1);
	if (free2)
		miso_free_matrix(free2);
	exit(1);
}

static void	miso_customs(char *program, int doesnt_exist)
{
	t_stat	metadata;

	if (doesnt_exist)
	{
		perror(BLOD"PROMPT"RSET);
		free(program);
		exit(1);
	}
	if (stat(program, &metadata) == -1)
	{
		perror(BLOD"PROMPT"RSET);
		free(program);
		exit(127);
	}
	else if (S_ISDIR(metadata.st_mode))
	{
		racc_print(2, BLOD"PROMPT: "MINT"%s"RSET": Is a directory\n", program);
		exit(126);
	}
	return ;
}

static char	*miso_pathmatch(char **dirs, char *temp_filename)
{
	int		guide;
	char	*path_name;

	if (!temp_filename || !dirs)
		return (NULL);
	guide = 0;
	path_name = ft_strjoin(dirs[guide], temp_filename);
	if (!path_name)
		return (NULL);
	while (access(path_name, F_OK) && dirs[guide])
	{
		guide++;
		if (!dirs[guide])
			break ;
		free(path_name);
		path_name = ft_strjoin(dirs[guide], temp_filename);
		if (!path_name)
			return (NULL);
	}
	return (path_name);
}

void	miso_pathfinder(char **cmd)
{
	char	**dirs;
	char	*path_name;
	char	*temp;
	char	*old_str;

	if (ft_strchr(*cmd, '/'))
		return ;
	dirs = ft_split(getenv("PATH"), ':');
	miso_checknfree(NULL, dirs, NULL, NULL);
	temp = ft_strjoin("/", *cmd);
	miso_checknfree(temp, NULL, NULL, dirs);
	path_name = miso_pathmatch(dirs, temp);
	miso_checknfree(path_name, NULL, temp, dirs);
	free(temp);
	miso_free_matrix(dirs);
	miso_customs(path_name, access(path_name, F_OK));
	old_str = *cmd;
	*cmd = path_name;
	free(old_str);
	return ;
}

int	main(int arc, char *argv[], char **envp)
{
	char *path;

	(void)arc;
	path = ft_strdup("bash");
	if (!path)
		return (1);
	miso_pathfinder(&path);
	racc_print(1,"%s\n", getenv("MISO"));
	execve(path, argv, envp);
	return (127);
}
