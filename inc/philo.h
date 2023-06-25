/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:32 by anmande           #+#    #+#             */
/*   Updated: 2023/06/24 16:58:22 by admin            ###   ########.fr       */
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

typedef struct s_phi
{
	int				id;
	long int		birth;
	long int		death;
	long int		eat;
	pthread_t		thread;
	pthread_mutex_t	*lf;
	pthread_mutex_t	*rf;
	struct s_data	*table;
}	t_phi;

typedef struct s_data
{
	int				nb_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				nb_eat;
	struct timeval	tv;
	struct timeval	op;
	long int		start;
	t_phi			*table_phi;
}	t_data;


int			ft_parseur(int argc, char **argv);
int			ft_isdigit(char c);
int			ft_checkarg(int argc, char **argv);
int			ft_philo(t_data *d, int argc, char **argv);
void		ft_setdata(t_data *d, char **argv);
long int	ft_atoi(const char *nptr);
long int	truetime(t_data *d);
void		*ft_routine(t_phi *phi);
int		ft_thread(t_data *d);

#endif
