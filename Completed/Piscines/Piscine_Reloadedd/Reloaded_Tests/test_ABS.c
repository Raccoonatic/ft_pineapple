/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:37:36 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/07 12:46:35 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdlib.h>
#include <stdio.h>

int main( int arc, char *wordy[])
{
	int a;

	(void)arc;
	a = atoi(wordy[1]);
	printf("%d\n", ABS(a));
	return(0);
}
