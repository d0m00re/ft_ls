/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_max_space_size.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:25:17 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:54:02 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include "ft_ori.h"

int		ft_found_max_space_size(t_stat_extand *extand)
{
	int c;
	int tmp;
	int max;

	c = 0;
	max = 0;
	if (!extand)
		return (-1);
	while (c < extand->size)
	{
		tmp = ft_size_long(extand->tab[c].data->st_size);
		if (max < tmp)
			max = tmp;
		c++;
	}
	return (max + 1);
}
