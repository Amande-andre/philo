/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:55 by anmande           #+#    #+#             */
/*   Updated: 2023/06/24 17:15:13 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	*ft_routine(t_phi *phi)
{
	printf("%d" BLUE"id= \n", phi->id);
	write(1, "1\n", 2);
	return (NULL);
}

static int	init_thread(t_data *d, t_phi *phi)
{
	int i;

	i = 0;
	while (i < d->nb_philo)
	{
		phi[i].id = i;
		printf(BLUE "id= ""%d" "\n", phi->id);
		pthread_create(&phi[i].thread, NULL, ft_routine(phi), );
		// if (pthread_create(&phi[i].thread, NULL, &ft_routine, &phi[i]) == -1)
		// 	return (-1);
		//phi->[i] = d;
		i++;
	}
	return (0);
}

int	ft_thread(t_data *d)
{
	t_phi *phi;
	
	phi = malloc(sizeof(t_phi) * d->nb_philo);
	if (!phi || init_thread(d, phi) != 0)
		return (1);
	//d->table_phi = phi;
	
	
	// while (i < d->nb_philo)
	// {
	// 	pthread_join(phi->thread, NULL);
	// 	i++;
	// }
}