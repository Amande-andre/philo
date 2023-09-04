/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:57:32 by anmande           #+#    #+#             */
/*   Updated: 2023/08/30 10:35:10 by admin            ###   ########.fr       */
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
	int 			status;
	unsigned		birth;
	unsigned		death;
	int				nb_meal;
	int				eating;
	pthread_t		thread;
	pthread_mutex_t	*lf;
	pthread_mutex_t	*rf;
	pthread_mutex_t	lock;
	struct s_data	*table;
}	t_phi;

typedef struct s_data
{
	pthread_t		*tid;
	int				nb_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				nb_eat;
	int				dead;
	int				end;
	unsigned		t2die;
	unsigned		t2eat;
	unsigned		t2sleep;
	unsigned		start_time;
	struct timeval	tv;
	struct timeval	op;
	pthread_mutex_t lock;
	pthread_mutex_t	*forks;
	pthread_mutex_t	write;
	t_phi			*phi;
}	t_data;


int			ft_parseur(int argc, char **argv);
int			ft_isdigit(char c);
int			ft_checkarg(int argc, char **argv);
int			ft_philo(t_data *d, int argc, char **argv);
int			ft_setdata(t_data *d, char **argv);
long int	ft_atoi(const char *nptr);
unsigned	truetime(t_data *d);
void		*ft_routine(void *phi_ptr);
//int			ft_thread(t_data *d);
int			ft_init_phi(t_data *d);
int			ft_mutex(t_data *d);
void    	ft_printchart(t_data *d, t_phi *phi);
int	init_thread(t_data *d);

#endif
