/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/05/17 14:48:02 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_philo(t_data *data, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	ft_setdata(data, argv);
	printf(""YELLOW"nb_philo = "NC" %d\n", data->nb_philo);
	printf(""YELLOW"time_to_die = "NC"%d\n", data->time_to_die);
	printf(""YELLOW"time_to_eat = "NC"%d\n", data->time_to_eat);
	printf(""YELLOW"time_to_sleep = "NC"%d\n", data->time_to_sleep);
	printf(""YELLOW"nb_eat = "NC" %d\n", data->nb_eat);
	printf(""YELLOW"start = "NC"%ld\n", data->start);

		return (1);
}