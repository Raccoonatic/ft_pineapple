/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_simulation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:34:51 by lde-san-          #+#    #+#             */
/*   Updated: 2026/04/28 23:41:53 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ph_run_simulation(t_table *sim, t_philo ***ph)
{
	pthread_t		*thr;
	int				thr_n;

	thr_n = sim->n + 1;
	thr = ph_calloc(thr_n, sizeof(pthread_t));
	if (!thr)
		ph_clean(sim, ph, 8, 1);
	pthread_mutex_lock(&sim->ded)
	while (thr_n >= 0)
	{
		if (thr_n == sim->n + 1)
			if (pthread_create(&thr[thr_n], NULL, &ph_monitor, sim))
				return (ph_clean(sim, ph, 10, ph_sim_end(sim, thr, thr_n, 1)));
		else if (pthread_create(&thr[thr_n], NULL, &ph_routine, (*ph)[thr_n]))
			return (ph_clean(sim, ph, 10, ph_sim_end(sim, thr, thr_n, 1)));
		thread_n--;
	}
	sim->start = ph_getnow();
	pthread_mutex_unlock(&sim->ded);
	return (ph_clean(sim, ph, 42, ph_sim_end(sim, thr, thr_n, 0)));
}

static void	*ph_monitor(void *arg)
{
	t_table *table;
	int		full;
	int		guide;

	table = (t_table *)arg;
	pthread_mutex_lock(&table->ded);
	if (table->omg_she_ded == true)
		return (pthread_mutex_unlock(&table->ded), NULL);
	full = 0;
	while (table->omg_she_ded == false && full != table->n)
	{
		pthread_mutex_unlock(&table->ded);
		full = 0;
		guide = 0;
		while (table->philos[guide])
		{
			pthread_mutex_lock(&table->philos[guide]->meal_lock);
			if (table->turns != -1 && 
				table->philos[guide]->meal_count >= table->turns)
				full++;
			if (ph_getnow() - table->philos[guide]->last_meal > table->ttd)
			{
				pthread_mutex_unlock(&table->philos[guide]->meal_lock);
				pthread_mutex_lock(&table->ded);
				table->omg_she_ded = true;
				ph_action_report(table->philos[guide], "died");
				break;
			}
			pthread_mutex_unlock(&table->philos[guide]->meal_lock);
			guide++;
		}
		pthread_mutex_lock(&table->ded);
	}
	if (full == table->n)
		table->omg_she_ded = true;
	pthread_mutex_unlock(&table->ded);
	return (NULL);
}

static void	*ph_routine(void *arg)
{
	t_philo *philo;

	philo = (t_philo *)arg;
	pthread_mutex_lock(&philo->table->ded);
	ph_action_report(philo, "is thinking");
	pthread_mutex_lock(&philo->meal_lock);
	if (philo->table->omg_she_ded == true)
		return (pthread_mutex_unlock(&philo->table->ded), NULL);
	pthread_mutex_unlock(&philo->table->ded);
	philo->last_meal = philo->table->start;
	pthread_mutex_unlock(&philo->meal_lock);
	if (philo->ordr == EVN)
		ph_usleep(100);
	pthread_mutex_lock(&philo->table->ded);
	while (philo->table->omg_she_ded == false)
	{
		pthread_mutex_unlock(&philo->table->ded);
		if (philo->ordr == EVN)
			if (ph_pickup_r_l(philo));
				break;
		else
			if (ph_pickup_l_r(philo));
				break;
		pthread_mutex_lock(&philo->table->ded);
	}
	pthread_mutex_unlock(&philo->table->ded);
	return (NULL);
}
