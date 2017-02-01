/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_time_modif_sort.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:58:04 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:58:14 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

void	ft_stat_extand_time_modif_sort(t_stat_extand *extand)
{
	int count;

	count = 1;
	while (count != extand->size - 1)
	{
		if (extand->tab[count].data->st_mtime <\
		extand->tab[count + 1].data->st_mtime)
		{
			ft_stat_extand_swap(extand, count, count + 1);
			count = 1;
		}
		else
			count++;
	}
}
