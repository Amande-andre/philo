/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/07/06 15:07:53 by anmande          ###   ########.fr       */
=======
/*   Updated: 2023/09/04 21:57:57 by admin            ###   ########.fr       */
>>>>>>> home
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

<<<<<<< HEAD
void	*ft_routine(void *phi)
{
	// if (truetime(phi->table) >= phi->table->time_to_die)
	// while (phi->death == 0)
	// {
	// }
	t_phi	*job;

	job = (t_phi *)phi;
	ft_printchart(job->table, phi);
	return (NULL);
}


=======
void	ft_eating(t_phi *phi)
{
	printf("id = %d is eating\n time = %u\n", phi->id, truetime(phi->table));
}

void	*ft_routine(void *phi_ptr)
{
	t_phi	*phi;

	phi = phi_ptr;
	while (phi->nb_meal > 0 || phi->death == 1)
	{
		//usleep(1);
		printf("id = %d eat = %d time = %u\n", phi->id, phi->nb_meal, truetime(phi->table));
		ft_eating(phi);
		//write(1, "&", 1);
		phi->nb_meal--;
	}
	return ((void *)0);
}

// void	ft_take_fork(t_phi *phi)
// {
	
// }
>>>>>>> home
