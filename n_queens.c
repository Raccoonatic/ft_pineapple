/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:15:34 by lde-san-          #+#    #+#             */
/*   Updated: 2025/12/29 14:05:39 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int validate(int *board, int n);
void print_solution(int *board, int n);
void find_solutions(int *board, int index, int queens, int n);

int main(int arc, char *arg[])
{
	int *board;
	int n;

	if (arc > 2 || arc < 2)
		return (1);
	n = atoi(arg[1]);
	if (n < 4)
		return (0);
	board = malloc(n * sizeof(int));
	if (!board)
		return (1);
	find_solutions(board, 0, 0, n);
	free(board);
	printf("\n");
	return (0);
}

int validate(int *board, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (i == j)
			{
				j++;
				continue ;
			}
			else if(board[i] == board[j])
				break;
			else if (board[i] + i == board[j] + j)
				break;
			else if (board[i] - i == board[j] - j)
				break;
			j++;
		}
		if (j != n)
			return(0);
		i++;
	}
	return (1);
}

void print_solution(int *board, int n)
{
	int guide;

	guide = 0;
	while (guide < n)
	{
		printf("%d", board[guide]);
		guide++;
		if (guide < n)
			printf(" ");
	}
	printf("\n");
	return ;
}

void find_solutions(int *board, int index, int queens, int n)
{
	int i;

	if (queens == n && validate(board, queens))
	{
		print_solution(board, n);
		return ;
	}
	else if (queens >= n)
		return ;
	i = 0;
	while (i < n)
	{
		board[index] = i;
		find_solutions(board, index + 1, queens + 1, n);
		i++;
	}
	return ;
}
