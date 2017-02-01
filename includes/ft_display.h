/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 21:39:09 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 21:39:10 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# include "ft_stat.h"
# include "ft_1d_int.h"

void	ft_usage(char *str);

void	ft_spe_display(char *str);

void	ft_display_error_file(char **argv, int id_b, t_1d_int *tab);

void	ft_display_basic_l(t_stat_extand *extand, char flag);

void	ft_display_basic_r(t_stat_extand *extand);

void	ft_display_basic_a(t_stat_extand *extand);

void	ft_display_basic(t_stat_extand *extand);

void	ft_display_permi(struct stat *statos);

void	ft_display_nlink(struct stat *statos, int nb_space);

void	ft_display_user(struct stat *statos, int nb_space);

void	ft_display_group(struct stat *statos, int nb_space);

void	ft_display_size(struct stat *statos, int nb_space);

void	ft_str_modif_end_nb_sep(char *str, char sep, int nb);

void	ft_display_mtime(struct stat *statos);

#endif
