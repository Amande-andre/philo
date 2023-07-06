/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_table.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:55 by anmande           #+#    #+#             */
/*   Updated: 2023/07/06 11:26:58 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

static int	init_thread(t_data *d, t_phi *phi)
{
	int i;

	i = 0;
	while (i < d->nb_philo)
	{
		//printf(BLUE "id= ""%d" "\n", phi->id);
		if (pthread_create(&phi[i].thread, NULL, ft_routine(&phi[i]), NULL) == -1)
			return (-1);

		//phi->[i] = d;
		i++;
	}
	return (0);
}

int	ft_thread(t_data *d)
{
	t_phi	*phi;
	int		i;

	i = 0;
	phi = malloc(sizeof(t_phi) * d->nb_philo);
	while (i < d->nb_philo)
	{
		ft_init_phi(&phi[i], i + 1, d);
		i++;
	}
	if (!phi || init_thread(d, phi) != 0)
		return (1);
	return (0);
	
	while (i < d->nb_philo)
	{
		pthread_join(phi->thread, NULL);
		i++;
	}
}

int	ft_mutex(t_data *d)
{
	int	i;

	i = 0;
	d->forks = malloc(sizeof(pthread_mutex_t) * d->nb_philo);
	while (i < d->nb_philo)
	{
		if (pthread_mutex_init(&d->forks[i], NULL) == -1)
			return (-1);
		i++;
	}
	return (0);
}
