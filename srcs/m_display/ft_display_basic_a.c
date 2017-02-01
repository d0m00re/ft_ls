/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_basic_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:33:01 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/04 18:33:04 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#include "ft_ori.h"

void	ft_display_basic_a(t_stat_extand *extand)
{
	int c;
	int max_size;

	if (!extand || extand->size <= 0)
		return ;
	c = 0;
	max_size = ft_stat_extand_max_size_name(extand);
	while (c < extand->size)
	{
		ft_putstr(extand->tab[c].name);
		ft_putchar('\n');
		c++;
	}
}
