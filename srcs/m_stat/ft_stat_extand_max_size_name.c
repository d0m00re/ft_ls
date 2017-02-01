/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_max_size_name.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:56:58 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:57:00 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

int	ft_stat_extand_max_size_name(t_stat_extand *extand)
{
	int c;
	int max_s;
	int tmp;

	c = 0;
	max_s = 0;
	while (c < extand->size)
	{
		tmp = ft_strlen(extand->tab[c].name);
		if (tmp > max_s)
			max_s = tmp;
		c++;
	}
	return (max_s + 1);
}
