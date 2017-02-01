/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_recurs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:08:12 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:21:03 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"

void		ft_manage_recurs(t_stat_extand *extand,\
			char flag, char *path)
{
	char	*new_path;
	int		c;

	c = 0;
	if ((flag & 0x10) != 0)
		while (extand && c < extand->size)
		{
			if (ft_stat_type_file(extand->tab[c].data) == 2 &&\
			extand->tab[c].name[0] != '.')
			{
				if (!(new_path = ft_strdup(path)))
					exit(1);
				if (path[ft_strlen(path) - 1] != '/')
					ft_str_resize_concat(&new_path, "/");
				ft_str_resize_concat(&new_path, extand->tab[c].name);
				ft_putchar('\n');
				ft_putstr(new_path);
				ft_putstr(":\n");
				ft_ls(flag, new_path);
				ft_strdel(&new_path);
			}
			c++;
		}
	if (extand)
		ft_stat_extand_destruct(&extand);
}
