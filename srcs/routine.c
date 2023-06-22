/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:55 by anmande           #+#    #+#             */
/*   Updated: 2023/06/22 16:34:52 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	*ft_routine(t_data *data)
{
	printf(""BLUE"thread= \n");
	(void)data;
	return (NULL);
}

void	ft_thread(t_data *data)
{
	int	i;
	t_phi *phi;
	
	phi = malloc(sizeof(t_phi) * data->nb_philo);
	data->table_phi = phi;
	i = 0;
	while (i < data->nb_philo)
	{
		pthread_create(&phi[i].thread, NULL, (void*)ft_routine, NULL);
		i++;
		phi[i].id = i;
	}
	i = 0;
	// while (i < phi->data->nb_philo)
	// {
	// 	pthread_join(phi->thread, NULL);
	// 	i++;
	// }
}