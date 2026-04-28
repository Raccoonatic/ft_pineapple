/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils_charlie.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:23:07 by lde-san-          #+#    #+#             */
/*   Updated: 2026/04/28 17:36:07 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ph_philo_alloc(t_table *sim, t_philo **ph, int guide)
{
	*ph = ph_calloc(1, sizeof(t_philo));
	if (!ph)
	{
		*ph = NULL;
		return (1);
	}
	if (pthread_mutex_init(&(*ph)->meal_lock))
	{
		free(*ph);
		*ph = NULL;
		return (1);
	}
	(*ph)->id = guide + 1;
	(*ph)->meal_count = 0;
	(*ph)->last_meal = 0;
	(*ph)->ordr = EVN;
	if (guide % 2)
		(*ph)->ordr = ODD;
	(*ph)->table = sim;
	(*ph)->left_fork = sim->forks[guide + 1 % sim->n];
	(*ph)->right_fork = sim->forks[guide];
	return (0);
}
