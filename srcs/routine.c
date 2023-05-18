/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:55 by anmande           #+#    #+#             */
/*   Updated: 2023/05/18 18:24:46 by anmande          ###   ########.fr       */
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
		pthread_create(&phi->thread, NULL, (void*)ft_routine, NULL);
		i++;
		phi->id[i][0] = i;
	}
	i = 0;
	while (i < phi->data->nb_philo)
	{
		pthread_join(phi->thread, NULL);
		i++;
	}
}