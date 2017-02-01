/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_init_with_size.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:48:36 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:48:38 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

t_stat_extand	*ft_stat_extand_init_with_size(int size)
{
	t_stat_extand *extand;

	if (!(extand = malloc(sizeof(t_stat_extand))))
		return (0);
	if (!(extand->tab = malloc(sizeof(t_stat) * size)))
		return (0);
	extand->path = ft_strdup(".");
	extand->size = size;
	return (extand);
}
