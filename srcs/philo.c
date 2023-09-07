/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/09/07 15:18:25 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	*god(void *phi_ptr)
{
	t_phi	*phi;

	phi = (t_phi *) phi_ptr;
	while (phi->table->dead == 0)
	{
		pthread_mutex_lock(&phi->lock);
		if (truetime(phi->table) >= phi->t2die && phi->eating == 0)
			printf("DEAD");
		if (phi->nb_meal == phi->table->nb_eat)
		{
			pthread_mutex_lock(&phi->table->lock);
			phi->table->end++;
			//phi->eat_cont++;
			pthread_mutex_unlock(&phi->table->lock);
		}
		pthread_mutex_unlock(&phi->table->lock);
	}
	return ((void *)0);
}

int	ft_philo(t_data *d, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	//ici on initialise les differentes variables des philos ex: id fourchettes  mutex;
	ft_setdata(d, argv);
	ft_mutex(d);
	ft_init_phi(d);
	//On créé les threads et on les init
	init_thread(d);
	ft_clear(d);
	printf("End of prog. All good.");
	return (1);
}
