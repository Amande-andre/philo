/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/06/21 17:26:08 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_philo(t_data *data, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	ft_setdata(data, argv);
	//ici on initialise les differentes variables des philos ex: id fourchettes  mutex;
	ft_thread(data);
	return (1);
}

void	ft_thread(t_data *data)
{
	int	i;

	i = 0;
	while (i <= data->nb_philo)
	{
		data->table_phi[i].id = i;
		pthread_create(&data->table_phi[i].thread, NULL, (void*)ft_routine, &data[i]);
		i++;
	}
	i = 0;
	while (i <= data->nb_philo)
	{
		data->table_phi[i].born = truetime(data);
		data->table_phi[i].id = i;
	}
}
