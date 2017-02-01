/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 21:39:43 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 21:43:44 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MANAGE_H
# define FT_MANAGE_H

# include "ft_display.h"
# include "ft_stat.h"
# include "ft_ori.h"
# include "ft_flag.h"
# include "ft_1d_int.h"

void			ft_ls(char flag, char *path);

t_1d_int		*ft_affect_data_at_table(int argc, char **argv, int id_b);

void			ft_display_basic_file_argv(char **argv, t_1d_int *tab,\
int id_b, char flag);

void			ft_manage_display(t_stat_extand *extand, char flag);

char			ft_manage_flag(int argc, char **argv);

void			ft_manage_sort(t_stat_extand *extand, char flag);

int				ft_manage_error_extand(t_stat_extand *extand, char *path);

void			ft_manage_recurs(t_stat_extand *extand, char flag, char *path);
#endif
