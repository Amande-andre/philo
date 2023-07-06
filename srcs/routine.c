/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/07/06 11:31:09 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	*ft_routine(t_phi *phi)
{
	// if (truetime(phi->table) >= phi->table->time_to_die)
		//ft_printchart(phi->table, phi);
	// while (phi->death == 0)
	// {
	// }
	printf("ok ca marche pour %d\n", phi->id);
	return (NULL);
}

// void	ft_printchart(t_data *d, t_phi *phi)
// {
// 	printf("%ldms %d ", truetime(d), phi->id);
// }
