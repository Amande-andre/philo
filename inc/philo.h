/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:32 by anmande           #+#    #+#             */
/*   Updated: 2023/05/16 17:30:24 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H

# include <stdio.h>
# include <sys/time.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct s_data
{
	int	nb_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	nb_eat;
}	t_data;


int	ft_parseur(int argc, char **argv);
int	ft_isdigit(char c);
int	ft_checkarg(int argc, char **argv);
int	ft_atoi(const char *nptr);
int	ft_philo(t_data *data, int argc, char **argv);
void	ft_setdata(t_data *data, char **argv);


#endif
