/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/07/06 14:15:43 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	*ft_routine(void *phi)
{
	// if (truetime(phi->table) >= phi->table->time_to_die)
		//ft_printchart(phi->table, phi);
	// while (phi->death == 0)
	// {
	// }
	t_phi	*job;

	job = (t_phi *)phi;
	printf("ok ca marche pour %d\n", job->id);
	return (NULL);
}

void	ft_printchart(t_data *d, t_phi *phi)
{
	printf("%ldms %d ", truetime(d), phi->id);
}
