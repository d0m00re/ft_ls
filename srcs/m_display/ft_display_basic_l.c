/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_basic_l.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:33:01 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/12 18:12:32 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#include "ft_stat.h"
#include "pwd.h"
#include "grp.h"
#include <unistd.h>

static int		ft_found_nb_space(int *nb_space, t_stat_extand *extand)
{
	nb_space[0] = ft_found_max_space_nlink(extand);
	nb_space[1] = ft_found_max_space_user(extand);
	nb_space[2] = ft_found_max_space_group(extand);
	nb_space[3] = ft_found_max_space_size(extand);
	if (nb_space[0] == -1 || nb_space[1] == -1 || nb_space[2] == -1\
	|| nb_space[3] == -1)
		return (-1);
	return (0);
}

static void		ft_file_with_block_512_or_1024(t_stat_extand *extand, char flag)
{
	int			c;
	int			c_t;

	c = 0;
	c_t = 0;
	while (c < extand->size)
	{
		if ((extand->tab[c].name[0] != '.')\
		|| (extand->tab[c].name[0] == '.' && (flag & 0x4)))
			c_t += extand->tab[c].data->st_blocks;
		c++;
	}
	if (extand->size == 2 && !flag | 0x8)
		return ;
	ft_putstr("total ");
	ft_putnbr(c_t);
	ft_putchar('\n');
}

static void		ft_display_name(t_stat *statt, char *path)
{
	char		str[512];
	char		temp[512];

	ft_putstr(statt->name);
	if (ft_stat_type_file(statt->data) == 3)
	{
		if (ft_strlen(statt->name) + ft_strlen(path) + 1 > 510)
			return ;
		ft_bzero(str, 512);
		ft_putstr(" -> ");
		ft_strcpy(temp, path);
		ft_strcat(temp, "/");
		ft_strcat(temp, statt->name);
		readlink(temp, str, 511);
		ft_putstr(str);
	}
}

static void		ft_display_data(t_stat_extand *extand, int *nb_space, int c)
{
	ft_display_permi(extand->tab[c].data);
	ft_display_nlink(extand->tab[c].data, nb_space[0]);
	ft_display_user(extand->tab[c].data, nb_space[1]);
	ft_display_group(extand->tab[c].data, nb_space[2]);
	if (ft_stat_type_file(extand->tab[c].data) != 4)
		ft_display_size(extand->tab[c].data, nb_space[3]);
	else
	{
		ft_putnbr(MAJOR(extand->tab[c].data->st_rdev));
		ft_putchar(',');
		ft_putnbr(MINOR(extand->tab[c].data->st_rdev));
		ft_putchar(' ');
	}
	ft_display_mtime(extand->tab[c].data);
	ft_display_name(&(extand->tab[c]), extand->path);
	ft_putchar('\n');
}

void			ft_display_basic_l(t_stat_extand *extand, char flag)
{
	int			c;
	int			nb_space[4];

	if (!extand || extand->size <= 0)
		return ;
	ft_init_tab_int(nb_space, 4, 0);
	if (ft_found_nb_space(nb_space, extand))
		return ;
	c = 0;
	ft_file_with_block_512_or_1024(extand, flag);
	while (c < extand->size)
	{
		if ((flag & 0x4) || extand->tab[c].name[0] != '.')
		{
			ft_display_data(extand, nb_space, c);
		}
		c++;
	}
}
