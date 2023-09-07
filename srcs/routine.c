/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/09/07 11:05:44 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	ft_take_fork(t_phi *phi)
{
	pthread_mutex_lock(phi->lf);
	printf("%d %d has taken a fork\n", truetime(phi->table), phi->id);
	pthread_mutex_lock(phi->rf);
	printf("%d %d has taken a fork\n", truetime(phi->table), phi->id);
}

void	ft_drop_fork(t_phi *phi)
{
	pthread_mutex_unlock(phi->lf);
	pthread_mutex_unlock(phi->rf);
}

void	ft_eating(t_phi *phi)
{
	ft_take_fork(phi);
	printf("%d %d is eating\n", truetime(phi->table), phi->id);
	ft_usleep(phi->table->time_to_eat, phi);
	ft_drop_fork(phi);
	printf("%d %d is sleeping\n", truetime(phi->table), phi->id);
	ft_usleep(phi->table->time_to_sleep, phi);
	phi->t2die = truetime(phi->table) + phi->table->time_to_die;
}

void	*ft_routine(void *phi_ptr)
{
	t_phi	*phi;

	phi = phi_ptr;
	//usleep(1000);
	if (pthread_create(&phi->t0, NULL, &god, (void *)phi))
		return ((void *)1);
	while (phi->nb_meal > 0 || phi->death == 1)
	{
		//usleep(100000);
		ft_eating(phi);
		phi->nb_meal--;
	}
	return ((void *)0);
}

