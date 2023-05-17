/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:01:02 by anmande           #+#    #+#             */
/*   Updated: 2023/05/17 14:48:35 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

int	main(int argc, char **argv)
{
	t_data *data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (0);
	if (!ft_philo(data, argc, argv))
		return (0);
	int i = 0;
	while (i < 1000000000)
		i++;
	printf(""YELLOW"time = "NC"%ld\n", truetime(data));
	free(data);
		return (0);
}