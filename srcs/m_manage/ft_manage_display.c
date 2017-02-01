/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:45:53 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:22:05 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_manage_display(t_stat_extand *extand, char flag)
{
	if (flag & 0x8)
		ft_display_basic_l(extand, flag);
	else if (flag & 0x4)
		ft_display_basic_a(extand);
	else
		ft_display_basic(extand);
}
