/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/06/25 20:47:43 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_philo(t_data *d, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	ft_setdata(d, argv);
	//ici on initialise les differentes variables des philos ex: id fourchettes  mutex;
	return (1);
}

int	ft_init_phi(t_phi *phi, int i, t_data *d)
{
	phi->id = i;
	phi->birth = 0;
	phi->death = 0;
	phi->eat = 0;
	//phi.lf = &d->fork[i];
	phi->rf = 0;
	phi->table = d;
	return (0);
}
