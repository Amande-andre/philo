/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/07/06 15:07:53 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

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


