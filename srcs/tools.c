/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:33:02 by anmande           #+#    #+#             */
/*   Updated: 2023/06/22 16:17:37 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

long int	ft_atoi(const char *nptr)
{
	int				i;
	int				sign;
	long long int	n;

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
	//printf("phi->data->nb_philo = %d\n", phi->data->nb_philo);
	data->nb_philo = ft_atoi(argv[1]); 
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	if (argv[5])
		data->nb_eat = ft_atoi(argv[5]);
	else
		data->nb_eat = -1;
	gettimeofday(&data->tv, NULL);
	ft_thread(data);

	data->start = (data->tv.tv_sec * 1000) + (data->tv.tv_usec / 1000);
}

long int truetime(t_data *data)
{
	long int	time;

	gettimeofday(&data->op, NULL);
	time = (data->op.tv_sec * 1000) + (data->op.tv_usec / 1000);
	return (time - data->start);
}
