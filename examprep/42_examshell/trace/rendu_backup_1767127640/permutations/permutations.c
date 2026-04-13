/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:54:54 by lde-san-          #+#    #+#             */
/*   Updated: 2025/12/30 18:51:21 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int srch(char *s, char c)
{
	int guide;

	guide = 0;
	while (s[guide])
	{
		if (s[guide] == c)
			return (1);
		guide++;
	}
	return (0);
}

int ft_strlen(char *s)
{
	int count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

void find_solutions(char *chars, char *perm, int crnt_len, int perm_len)
{
	int i = 0;

	if (crnt_len == perm_len)
	{
		puts(perm);
		return ;
	}
	while(chars[i])
	{
		if(!srch(perm, chars[i]))
		{
			perm[crnt_len] = chars[i];
			find_solutions(chars, perm, crnt_len + 1, perm_len);
			perm[crnt_len] = 0;
		}
		i++;
	}
	return ;
}

int main (int arc, char *arg[])
{
	char *alpha = "abcdefghijklmnopqrstuvwxyz";
	char *result;
	int guide = 0;
	int found = 0;
	int perm_len;

	if (arc > 2 || arc < 2)
		return (1);
	if (!arg || !arg[1])
		return (1);
	perm_len = ft_strlen(arg[1]);
	result = calloc(perm_len + 1, sizeof(char));
	if (!result)
		return (1);
	while (alpha[guide] && found < perm_len)
	{
		if (srch(arg[1], alpha[guide]))
		{
			result[found] = alpha[guide]; 
			found++;
		}
		guide++;
	}
	guide = 0;
	while (arg[1][guide])
	{
		arg[1][guide] = result[guide];
		result[guide] = 0;
		guide++;
	}
	find_solutions(arg[1], result, 0, perm_len);
	free(result);
	return (0);
}
