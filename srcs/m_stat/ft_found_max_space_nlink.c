/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_max_space_nlink.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:17:37 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/06 17:17:39 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

int	ft_found_max_space_nlink(t_stat_extand *extand)
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
		tmp = ft_size_long(extand->tab[c].data->st_nlink);
		if (max < tmp)
			max = tmp;
		c++;
	}
	return (max + 1);
}
