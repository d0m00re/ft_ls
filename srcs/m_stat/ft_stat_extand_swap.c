/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:41:50 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:05:47 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

void			ft_stat_extand_swap(t_stat_extand *extand, int id, int id2)
{
	char		*name;
	struct stat	*data;

	if (!extand || id >= extand->size || id2 >= extand->size)
		return ;
	name = extand->tab[id].name;
	data = extand->tab[id].data;
	extand->tab[id].name = extand->tab[id2].name;
	extand->tab[id2].name = name;
	extand->tab[id].data = extand->tab[id2].data;
	extand->tab[id2].data = data;
}
