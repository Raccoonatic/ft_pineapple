/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:42:52 by lde-san-          #+#    #+#             */
/*   Updated: 2024/09/23 19:35:05 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort( int arc, char *argv[]);
void	print(int arc, char *wordy[]);
int		ft_strcmp(char *s1, char *s2);

int	main( int argc, char *argv[])
{
	if (argc <= 2)
	{
		if (argc == 1)
			return (1);
		else
		{
			print(argc, argv);
			return (0);
		}
	}
	sort(argc, argv);
	print(argc, argv);
	return (0);
}

void	sort( int argc, char *argv[])
{
	int		i;
	int		sort_guide;
	char	*vessel;

	sort_guide = 0;
	while (!sort_guide)
	{
		sort_guide = 1;
		i = 1;
		while (i < argc - 1)
		{
			while (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				vessel = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = vessel;
				sort_guide = 0;
			}
			i++;
		}
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	guide;
	int	result;

	guide = 0;
	while (s1[guide] && s1[guide] == s2[guide])
	{
		guide++;
	}
	result = s1[guide] - s2[guide];
	return (result);
}

void	print(int arc, char *wordy[])
{
	int	guide_alpha;
	int	guide_beta;

	guide_alpha = 1;
	while (guide_alpha < arc)
	{
		guide_beta = 0;
		while (wordy[guide_alpha][guide_beta])
		{
			write(1, &wordy[guide_alpha][guide_beta], 1);
			guide_beta++;
		}
		write(1, "\n", 1);
		guide_alpha++;
	}
}
