/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:57:32 by admin             #+#    #+#             */
/*   Updated: 2023/06/25 21:12:10 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	*ft_routine(t_phi *phi)
{
	// if (truetime(phi->table) >= phi->table->time_to_die)
		ft_printchart(phi->table, *phi);
	// while (phi->death == 0)
	// {
	// }
	return (NULL);
}

void    ft_printchart(t_data *d, t_phi phi)
{
    printf("%ldms %d ", truetime(d), phi.id);
}