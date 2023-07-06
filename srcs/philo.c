/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/07/06 15:01:00 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_philo(t_data *d, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	ft_setdata(d, argv);
	return (1);
}

int	ft_init_phi(t_phi *phi, int i, t_data *d)
{
	phi->id = i;
	phi->birth = 0;
	phi->death = d->time_to_die;
	phi->eat = 0;
	phi->lf = &d->forks[i];
	phi->rf = 0;
	phi->table = d;
	return (0);
}
