/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:52:53 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/12 16:52:56 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"
#include "ft_ori.h"

static void			ft_manage_main(t_stat_extand *extand, char flag, char *path)
{
	ft_manage_sort(extand, flag);
	ft_manage_display(extand, flag);
	ft_manage_recurs(extand, flag, path);
}

void				ft_ls(char flag, char *path)
{
	int				c;
	t_stat_extand	*extand;

	c = 0;
	extand = ft_stat_extand_init_all_t_stat(path);
	if (!extand && ft_found_type_of_error_file(path) == 5)
	{
		ft_putstr_fd("ft_ls: ", 2);
		ft_spe_display(path);
		ft_putstr_fd(": Permission denied\n", 2);
		return ;
	}
	if (extand && ft_manage_error_extand(extand, path))
	{
		ft_stat_extand_destruct(&extand);
		extand = 0;
		ft_strdel(&path);
		return ;
	}
	else
	{
		if (!extand || !(extand->tab) || !(extand->tab[0].data))
			return ;
		ft_manage_main(extand, flag, path);
	}
}
