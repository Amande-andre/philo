/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmande <anmande@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:32 by anmande           #+#    #+#             */
/*   Updated: 2023/06/21 17:21:54 by anmande          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H

#define NC	"\e[0m"
#define YELLOW	"\e[33m"
#define BYELLOW	"\e[1;33m"
#define RED		"\e[31m"
#define GREEN	"\e[32m"
#define BLUE	"\e[34m"

# include <stdio.h>
# include <sys/time.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <string.h>

typedef struct s_phi
{
	pthread_t		thread;
	int				death;
	long int		last_meal;
	pthread_mutex_t	*lf;
	pthread_mutex_t	*rf;
	long int		born;
	int				id;
}	t_phi;

typedef struct s_data
{
	long int		start;
	int				nb_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				nb_eat;
	struct timeval	tv;
	struct timeval	op;
	t_phi			*table_phi;
}	t_data;

int			ft_parseur(int argc, char **argv);
int			ft_isdigit(char c);
int			ft_checkarg(int argc, char **argv);
int			ft_philo(t_data *data, int argc, char **argv);
void		ft_setdata(t_data *data, char **argv);
long int	ft_atoi(const char *nptr);
long int	truetime(t_data *data);
void		*ft_routine(t_data *data);
void		ft_thread(t_data *data);
void		*ft_calloc(size_t nmemb, size_t size);

#endif
