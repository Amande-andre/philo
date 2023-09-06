/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:55 by anmande           #+#    #+#             */
<<<<<<< HEAD:srcs/set_table.c
/*   Updated: 2023/07/06 15:02:34 by anmande          ###   ########.fr       */
=======
/*   Updated: 2023/09/04 19:43:43 by admin            ###   ########.fr       */
>>>>>>> home:srcs/init.c
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

<<<<<<< HEAD:srcs/set_table.c
static void	end_threads(t_data *d, t_phi *phi)
=======
int	init_thread(t_data *d)
>>>>>>> home:srcs/init.c
{
	int	i;

	i = 0;
	while (i < d->nb_philo)
	{
<<<<<<< HEAD:srcs/set_table.c
		pthread_join(phi->thread, NULL);
=======
		if (pthread_create(&d->tid[i], NULL, &ft_routine, &d->phi[i]) == -1)
			return (1);
		i++;
	}
	i = 0;
	while (i < d->nb_philo)
	{
		if (pthread_join(d->tid[i], NULL))
			return (1);
>>>>>>> home:srcs/init.c
		i++;
	}
}

int	ft_init_phi(t_data *d)
{
	int		i;

	i = 0;
	while (i < d->nb_philo)
	{
<<<<<<< HEAD:srcs/set_table.c
		ft_init_phi(&phi[i], i + 1, d);
		if (pthread_create(&phi[i].thread, NULL, ft_routine, &phi[i]) != 0)
			return (1);
		usleep(10);
		i++;
	}
	end_threads(d, phi);
	return (0);
=======
		d->phi[i].id = i + 1;
		d->phi[i].status = 0;
		d->phi[i].death = d->t2die;
		d->phi[i].nb_meal = d->nb_eat;
		d->phi[i].eating = d->t2eat;
		pthread_mutex_init(&d->phi[i].lock, NULL);
		d->phi[i].table = d;
		i++;
	}
	return (0);
}

int	ft_setdata(t_data *d, char **argv)
{	
	//printf("phi->d->nb_philo = %d\n", phi->d->nb_philo);
	d->nb_philo = ft_atoi(argv[1]); 
	d->time_to_die = (unsigned) ft_atoi(argv[2]);
	d->time_to_eat = (unsigned) ft_atoi(argv[3]);
	d->time_to_sleep = (unsigned) ft_atoi(argv[4]);
	if (argv[5])
		d->nb_eat = ft_atoi(argv[5]);
	else
		d->nb_eat = -1;
	if (d->nb_philo <= 0 || d->nb_philo > 200)
		return (0);
	gettimeofday(&d->tv, NULL);
	d->start_time = (d->tv.tv_sec * 1000) + (d->tv.tv_usec / 1000);
	d->dead = 0;
	d->end = 0;
	pthread_mutex_init(&d->lock, NULL);
	pthread_mutex_init(&d->write, NULL);
	return (0);
>>>>>>> home:srcs/init.c
}

int	ft_mutex(t_data *d)
{
	int	i;

	i = 0;
	d->tid = malloc(sizeof(pthread_t) * d->nb_philo);
	d->forks = malloc(sizeof(pthread_mutex_t) * d->nb_philo);
	d->phi = malloc(sizeof(t_phi) * d->nb_philo);

	if (!d->tid || !d->forks || !d->phi)
		return (1);
	while (i < d->nb_philo)
	{
		//codition de sécurité
		pthread_mutex_init(&d->forks[i], NULL);
		(void)d->forks[i];
		i++;
	}
	i = 1;
	d->phi[0].lf = &d->forks[0];
	d->phi[0].rf = &d->forks[d->nb_philo];
	while (i < d->nb_philo)
	{
		d->phi[i].lf = &d->forks[i];
		d->phi[i].lf = &d->forks[i - 1];
		i++;
	}
	return (0);
}
<<<<<<< HEAD:srcs/set_table.c
=======


>>>>>>> home:srcs/init.c
