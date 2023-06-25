/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:01:02 by anmande           #+#    #+#             */
/*   Updated: 2023/06/24 11:51:00 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	main(int argc, char **argv)
{
	t_data *d;
	
	d = malloc(sizeof(t_data));
	if (!d)
		return (0);
	if (!ft_philo(d, argc, argv))
		return (0);
	//printf(""YELLOW"time = "NC"%ld\n", truetime(data));
	free(d);
		return (0);
}