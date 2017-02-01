/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:33:49 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:33:51 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_display_basic(t_stat_extand *extand)
{
	int c;
	int max_size;

	if (!extand || extand->size <= 0)
		return ;
	c = 0;
	max_size = ft_stat_extand_max_size_name(extand);
	while (c < extand->size)
	{
		if (extand->tab[c].name[0] != '.')
		{
			ft_putstr(extand->tab[c].name);
			if (c != extand->size - 1)
			{
				ft_putchar('\n');
			}
		}
		c++;
	}
	if (c & 'a' || c > 2)
		ft_putchar('\n');
}
