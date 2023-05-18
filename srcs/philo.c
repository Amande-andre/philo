/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/05/18 18:09:16 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_philo(t_data *data, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	ft_setdata(data, argv);
	//ici on initialise les differentes variables des philos ex: id fourchettes  mutex;
	printf(""YELLOW"nb_philo = "GREEN" %d\n", data->nb_philo);
	printf(""YELLOW"time_to_die = "GREEN"%d\n", data->time_to_die);
	printf(""YELLOW"time_to_eat = "GREEN"%d\n", data->time_to_eat);
	printf(""YELLOW"time_to_sleep = "GREEN"%d\n", data->time_to_sleep);
	printf(""YELLOW"nb_eat = "GREEN" %d\n", data->nb_eat);
	printf(""YELLOW"start = "GREEN"%ld\n", data->start);
	ft_thread(data);

		return (1);
}