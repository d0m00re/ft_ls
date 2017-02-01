/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 20:02:14 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 20:02:15 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"

void	ft_manage_sort(t_stat_extand *extand, char flag)
{
	if (!(flag & 0x1))
		ft_stat_extand_ascii_sort(extand);
	else
		ft_stat_extand_time_modif_sort(extand);
	if ((flag & 0x2) != 0)
		ft_stat_extand_reverse(extand);
}
