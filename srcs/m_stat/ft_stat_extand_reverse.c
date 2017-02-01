/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_reverse.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:48:46 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:48:48 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

void	ft_stat_extand_reverse(t_stat_extand *extand)
{
	int c;
	int size;

	c = 0;
	size = extand->size - 1;
	while (size > c)
	{
		ft_stat_extand_swap(extand, c, size);
		size--;
		c++;
	}
}
