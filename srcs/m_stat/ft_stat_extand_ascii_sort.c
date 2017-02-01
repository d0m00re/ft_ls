/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_ascii_sort.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:41:08 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/12 14:16:49 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

static int		ft_found_id_min(t_stat_extand *extand, int id_base)
{
	int			id_min;

	id_min = id_base;
	while (id_base < extand->size)
	{
		if (ft_strcmp(extand->tab[id_min].name, extand->tab[id_base].name) > 0)
			id_min = id_base;
		id_base++;
	}
	return (id_min);
}

void			ft_stat_extand_ascii_sort(t_stat_extand *extand)
{
	int			id_base;
	int			id_min;

	id_base = 0;
	while (id_base != extand->size - 1)
	{
		id_min = ft_found_id_min(extand, id_base);
		if (id_min != id_base)
			ft_stat_extand_swap(extand, id_base, id_min);
		id_base++;
	}
}
