/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/09/06 13:48:44 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	ft_take_fork(t_phi *phi)
{
	pthread_mutex_lock(phi->lf);
	printf("%d take a fork_f ptr = %p\n", phi->id, phi->lf);
	pthread_mutex_lock(phi->rf);
	printf("%d take a fork_r ptr = %p\n", phi->id, phi->rf);
	printf("id = %d eat = %d time = %u\n", phi->id, phi->nb_meal, truetime(phi->table));
}

void	ft_drop_fork(t_phi *phi)
{
	write(1, "\n", 1);
	pthread_mutex_unlock(phi->lf);
	pthread_mutex_unlock(phi->rf);
	printf("forks down");
	usleep(5);
}

void	ft_eating(t_phi *phi)
{
	ft_take_fork(phi);
	ft_drop_fork(phi);
}

void	*ft_routine(void *phi_ptr)
{
	t_phi	*phi;

	phi = phi_ptr;
	 usleep(1000);
	while (phi->nb_meal > 0 || phi->death == 1)
	{
		//usleep(1);
		ft_eating(phi);
		phi->nb_meal--;
	}
	return ((void *)0);
}

