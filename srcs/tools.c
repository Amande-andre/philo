/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:33:02 by anmande           #+#    #+#             */
/*   Updated: 2023/06/20 13:55:28 by anmande          ###   ########.fr       */
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
	data->nb_philo = ft_atoi(argv[1]); 
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	data->table_phi = ft_calloc(data->nb_philo, sizeof(t_phi));
	if (argv[5])
		data->nb_eat = ft_atoi(argv[5]);
	else
		data->nb_eat = -1;
	gettimeofday(&data->tv, NULL);
	data->start = (data->tv.tv_sec * 1000) + (data->tv.tv_usec / 1000);
}

long int truetime(t_data *data)
{
	long int	time;

	gettimeofday(&data->op, NULL);
	time = (data->op.tv_sec * 1000) + (data->op.tv_usec / 1000);
	return (time - data->start);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	s = (void *)malloc(sizeof(void) * (nmemb * size));
	if (!s)
		return (NULL);
	memset(s, 0, nmemb * size);
	return (s);
}

// void	ft_free(t_data *data)
// {
// 	free(data);
// 	free(data->table_phi->id);
// 	free(data->table_phi->phi);
// 	free(data);
// }