/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:33:02 by anmande           #+#    #+#             */
/*   Updated: 2023/05/16 16:45:58 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long int	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		n = n * 10 + nptr[i] - '0';
		i++;
	}
	return (n * sign);
}

void	ft_setdata(t_data *data, char **argv)
{
	data->nb_philo = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	if (argv[5])
		data->nb_eat = ft_atoi(argv[5]);
	else
		data->nb_eat = -1;
	printf("nb_philo = %d\n", data->nb_philo);
	printf("time_to_die = %d\n", data->time_to_die);
	printf("time_to_eat = %d\n", data->time_to_eat);
	printf("time_to_sleep = %d\n", data->time_to_sleep);
}
