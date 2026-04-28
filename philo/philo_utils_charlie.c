/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils_charlie.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:23:07 by lde-san-          #+#    #+#             */
/*   Updated: 2026/04/28 23:42:18 by lde-san-         ###   ########.fr       */
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

int	ph_sim_end(t_table *sim, pthread_t **thr, int thr_n, int exit_cd)
{
	int	running_thr;
	int	guide;

	sim->omg_she_ded = true;
	pthread_mutex_unlock(&sim->ded);
	if (sim->n + 1 == thr_n)
		return (exit_cd);
	running_thr = (sim->n + 1) - thr_n;
	guide = 0;
	while(running_thr > 0)
	{
		if ((*thr)[guide])
		{
			pthread_join((*thr)[guide], NULL);
			running_thr--;
		}
		guide++;
	}
	return (exit_cd);
}

void	ph_action_report(t_philo *p, char *action)
{
	pthread_mutex_lock(&p->table->print);
	pthread_mutex_lock(&p->table->ded);
	if (philo->table->omg_she_ded == false)
		printf("%lld %d %s\n", getnow() - p->table->start, p->id, action);
	pthread_mutex_unlock(&p->table->ded);
	pthread_mutex_unlock(&p->table->print);
	return ;
}

