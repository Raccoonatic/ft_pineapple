/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:50:03 by lde-san-          #+#    #+#             */
/*   Updated: 2026/04/28 23:42:27 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>
# include <stdbool.h>

# define RSET	"\033[0m"
# define B_WI	"\033[1;37m"
# define LIME	"\033[1;38;2;0;255;0m"
# define BABY	"\033[38;2;0;255;247m"
# define BLOD	"\033[1;38;2;255;0;0m"
# define ORNG	"\033[38;2;255;153;51m"
# define PINK	"\033[1;38;2;255;0;251m"
# define PURP	"\033[1;38;2;174;5;252m"
# define GOLD   "\033[1;38;2;235;232;52m"
# define MINT	"\033[1;38;2;55;250;133m"
# define NEOR	"\033[3m\033[38;2;255;153;51m"

typedef enum e_odeven
{
	ODD,
	EVN
}	t_odeven;

typedef struct s_philo t_philo;

typedef struct s_table
{
	int				n;
	int				turns;
	long long		ttd;
	long long		tte;
	long long		tts;
	long long		start;
	bool			omg_she_ded;
	pthread_mutex_t	ded;
	pthread_mutex_t print;
	pthread_mutex_t *forks;
	t_philo			**philos;
}	t_table;

struct s_philo
{
	int				id;
	long			meal_count;
	long long		last_meal;
	pthread_mutex_t	meal_lock;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
	t_odeven		ordr;
	t_table			*table;
};

#endif
