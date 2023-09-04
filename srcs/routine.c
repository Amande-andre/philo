/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/09/04 21:57:57 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

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
