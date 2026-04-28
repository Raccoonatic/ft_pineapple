/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils_beta.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 23:31:02 by lde-san-          #+#    #+#             */
/*   Updated: 2026/04/28 17:35:35 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

size_t	ph_strlen(const char *str)
{
	size_t	guide;

	guide = 0;
	while (str[guide])
		guide++;
	return (guide);
}

int	ph_printerr(int err_cd, int exit_cd)
{
	char *use;

	use = MINT"Usage:"BABY"./philo "LIME"n_philo ttd tte tts"GOLD" [meals]"RSET;
	write(2, ph_msg_bank(err_cd), ph_strlen(ph_msg_bank(err_cd)));
	if (err_cd == 1)
		write(2, use, ph_strlen(use));
	return (exit_cd);
}

static char *ph_msg_bank(int msg_cd)
{
	if (msg_cd == 1)
		return (BLOD"Sim Failed"RSET": "NEOR"Incorrect Argument Count"RSET);
	if (msg_cd == 2)
		return (BLOD"Sim Failed"RSET": "NEOR"Invalid Arg "PINK"n_philo"RSET);
	if (msg_cd == 3)
		return (BLOD"Sim Failed"RSET": "NEOR"Invalid Arg "PINK"ttd"RSET);
	if (msg_cd == 4)
		return (BLOD"Sim Failed"RSET": "NEOR"Invalid Arg "PINK"tte"RSET);
	if (msg_cd == 5)
		return (BLOD"Sim Failed"RSET": "NEOR"Invalid Arg "PINK"tts"RSET);
	if (msg_cd == 6)
		return (BLOD"Sim Failed"RSET": "NEOR"Invalid Arg "PINK"[meals]"RSET);
	if (msg_cd == 7)
		return (BLOD"Sim Failed"RSET": "PURP"mutex_init "ORNG"Failed"RSET);
	if (msg_cd == 8)
		return (BLOD"Sim Failed"RSET": "PURP"malloc "ORNG"Failed"RSET);
	if (msg_cd == 9)
		return (BLOD"Sim Failed"RSET": "PURP"philo_alloc "ORNG"Failed"RSET);
	return (BLOD"Sim Failed"RSET": "NEOR"Unexpected Error"RSET);
}

void	*ph_calloc(size_t nmemb, size_t size)
{
	void	*allocated;
	size_t	mem_total_size;

	if (nmemb != 0 && size > (SIZE_MAX / nmemb))
		return (NULL);
	mem_total_size = nmemb * size;
	allocated = malloc(mem_total_size);
	if (!allocated)
		return (NULL);
	memset(allocated, '\0', mem_total_size);
	return (allocated);
}
/*It allocates a number of nmemb spaces of size "size" in memory as long as
the system architecture has enough space for it. Then it initializes the memory
area by filling it with null characters "\0". */

int	ph_clean_up(t_table *sim, t_philo ***philos, int err_cd, int exit_cd)
{
	int guide;

	pthread_mutex_destroy(&sim->ded);
	pthread_mutex_destroy(&sim->print);
	guide = 0;
	while (sim->forks[guide])
		pthread_mutex_destroy(&sim->forks[guide++]);
	free(sim->forks);
	if (philos)
	{
		guide = 0;
		while(guide < sim->n)
		{
			if ((*philos)[guide])
			{
				pthread_mutex_destroy(&(*philos)[guide]->meal_lock);
				free((*philos)[guide]);
			}
			guide++;
		}
		free(*philos);
	}
	return (ph_printerr(err_code, exit_cd));
}
