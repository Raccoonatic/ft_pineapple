/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powerset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:07:55 by lde-san-          #+#    #+#             */
/*   Updated: 2025/12/30 20:46:53 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


void print_solution(int *set, int len)
{
	int guide = 0;

	while (guide < len)
	{
		printf("%d", set[guide]);
		guide++;
		if (guide == len)
			break;
		printf(" ");
	}
	printf("\n");
	return ;
}

void find_solutions(int i, int *set, int set_len, int *sub_set, int sub_set_len, int crnt_sum, int target)
{
	if (sub_set_len >= set_len)
		return ;
	if (i < set_len)
	{
		sub_set[sub_set_len] = set[i];
		if ((crnt_sum + set[i]) == target)
			print_solution(sub_set, sub_set_len + 1);
		find_solutions(i + 1, set, set_len, sub_set, sub_set_len + 1, (crnt_sum + set[i]), target);
		find_solutions(i + 1, set, set_len, sub_set, sub_set_len, crnt_sum, target);
	}
	return ;
}

int main (int arc, char *argv[])
{
	int target;
	int set_len;
	int *set;
	int *sub_set;
	int guide;

	if (arc < 2)
		return (1);
	if (arc == 2)
		return (1);
	target = atoi(argv[1]);
	if (!target)
		printf("\n");
	set_len = arc - 2;
	set = malloc(set_len * sizeof(int));
	if (!set)
		return (1);
	sub_set = malloc(set_len * sizeof(int));
	if (!sub_set)
	{
		free(set);
		return(1);
	}
	guide  = 0;
	while (guide < set_len)
	{
		set[guide] = atoi(argv[guide + 2]);
		guide++;
	}
	find_solutions(0, set, set_len, sub_set, 0, 0, target);
	free(set);
	free(sub_set);
	return (0);
}
