/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/09/10 19:53:10 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	check(t_phi *phi)
{
	if ( truetime(phi->table) >= phi->t2die)
		return (1);
	return (0);
}

void	ft_drop_fork(t_phi *phi)
{
	pthread_mutex_unlock(phi->lf);
	pthread_mutex_unlock(phi->rf);
}

void	ft_take_fork(t_phi *phi)
{
	unsigned	start;

	start = truetime(phi->table);
	pthread_mutex_lock(phi->lf);
	ft_print(check(phi), "has taken a fork", phi);
	if (truetime(phi->table) - phi->t2die > 60)
	{
		pthread_mutex_unlock(phi->lf);
		ft_usleep(truetime(phi->table)/10, phi);
	}	
	pthread_mutex_lock(phi->rf);
	ft_print(check(phi), "has taken a fork", phi);

}

void	ft_eating(t_phi *phi)
{
	ft_take_fork(phi);
	ft_print(check(phi), "is eating", phi);	
	ft_usleep(phi->table->time_to_eat, phi);
	ft_drop_fork(phi);
	ft_print(check(phi), "is sleeping", phi);	
	ft_usleep(phi->table->time_to_sleep, phi);
	phi->t2die = truetime(phi->table) + phi->table->time_to_die;
}

void	*ft_routine(void *phi_ptr)
{
	t_phi	*phi;

	phi = phi_ptr;
	while (phi->nb_meal != 0 && phi->death == 0)
	{
		phi->nb_meal--;
		ft_eating(phi);
	}
	return ((void *)0);
}

