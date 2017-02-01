/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_basic_file_argv.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:13:26 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:22:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"

void				ft_display_basic_file_argv(char **argv, t_1d_int *tab,\
					int id_b, char flag)
{
	t_stat_extand	*extand;
	int				c;
	int				nb;

	c = 0;
	nb = 0;
	while (c < tab->len)
	{
		if (tab->tab[c] == 3)
			nb++;
		c++;
	}
	if (nb == 0)
		return ;
	if (!(extand = ft_stat_extand_init_with_size(nb)))
		return ;
	c = 0;
	while (c < nb)
	{
		ft_stat_extand_set_elem(extand, argv[id_b + c], c);
		c++;
	}
	ft_manage_display(extand, flag);
}
