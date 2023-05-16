/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:04:14 by anmande           #+#    #+#             */
/*   Updated: 2023/05/16 17:16:59 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	ft_philo(t_data *data, int argc, char **argv)
{
	if (!ft_parseur(argc, argv))
		return (0);
	ft_setdata(data, argv);
		return (1);
}