/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:33:02 by anmande           #+#    #+#             */
/*   Updated: 2023/06/24 11:50:43 by admin            ###   ########.fr       */
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

void	ft_setd(t_data *d, char **argv)
{	
	//printf("phi->d->nb_philo = %d\n", phi->d->nb_philo);
	d->nb_philo = ft_atoi(argv[1]); 
	d->time_to_die = ft_atoi(argv[2]);
	d->time_to_eat = ft_atoi(argv[3]);
	d->time_to_sleep = ft_atoi(argv[4]);
	if (argv[5])
		d->nb_eat = ft_atoi(argv[5]);
	else
		d->nb_eat = -1;
	gettimeofday(&d->tv, NULL);
	ft_thread(d);

	d->start = (d->tv.tv_sec * 1000) + (d->tv.tv_usec / 1000);
}

long int truetime(t_data *d)
{
	long int	time;

	gettimeofday(&d->op, NULL);
	time = (d->op.tv_sec * 1000) + (d->op.tv_usec / 1000);
	return (time - d->start);
}
