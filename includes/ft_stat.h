/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 12:56:06 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/12 19:07:54 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STAT_H
# define FT_STAT_H

# include <sys/stat.h>
# include <time.h>
# include <dirent.h>
# include <sys/types.h>
# include "ft_ori.h"
# include <stdlib.h>
# include <time.h>

# define SIX_MONTH (365 / 2) * 86400

# define MAJOR(rdev) rdev >> 24

# define MINOR(rdev) rdev & 255

typedef struct	s_stat
{
	char		*name;
	struct stat *data;
}				t_stat;

typedef struct	s_stat_extand
{
	char		*path;
	int			size;
	t_stat		*tab;
}				t_stat_extand;

int				ft_stat_type_file(struct stat *data);

char			*ft_stat_generate_time(time_t t);

int				ft_stat_type_time(time_t t);

void			ft_stat_destruct(t_stat **stat);

void			ft_stat_extand_destruct(t_stat_extand **stat);

int				ft_found_type_of_error_file(char *name);

int				ft_found_first_name_file(int argc, char **argv);

int				ft_is_rep(char *name);

int				ft_found_max_space_nlink(t_stat_extand *extand);

int				ft_found_max_space_user(t_stat_extand *extand);

int				ft_found_max_space_group(t_stat_extand *extand);

int				ft_found_max_space_size(t_stat_extand *extand);

int				ft_stat_extand_max_size_name(t_stat_extand *extand);

int				ft_swap_extand_calcul_space_for_name(t_stat_extand *extand);

void			ft_stat_extand_swap(t_stat_extand *extand, int id, int id2);

void			ft_stat_extand_ascii_sort(t_stat_extand *extand);

void			ft_stat_extand_time_modif_sort(t_stat_extand *extand);

void			ft_stat_extand_reverse(t_stat_extand *extand);

t_stat_extand	*ft_stat_extand_init_with_basic_inf(char *rep_path);

t_stat_extand	*ft_stat_extand_init_with_size(int size);

t_stat_extand	*ft_stat_extand_init_all_t_stat(char *rep_path);

int				ft_stat_extand_set_elem(t_stat_extand *extand,\
				char *n_file, int id);

void			ft_stat_extand_destruct(t_stat_extand **extand);

void			ft_stat_extand_to_string(t_stat_extand *extand);

DIR				*ft_recup_d_rep(char *name);
#endif
