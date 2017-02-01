/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_destruct.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:43:03 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:43:04 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

void	ft_stat_extand_destruct(t_stat_extand **extand)
{
	int count;

	count = 0;
	if (extand && *extand)
	{
		while (count < ((*extand)->size))
		{
			ft_strdel(&(*extand)->tab[count].name);
			ft_memdel((void **)&(*extand)->tab[count].data);
			count++;
		}
		ft_memdel((void **)&(*extand)->path);
		ft_memdel((void **)&(*extand)->tab);
		ft_memdel((void **)extand);
		extand = 0;
	}
}
