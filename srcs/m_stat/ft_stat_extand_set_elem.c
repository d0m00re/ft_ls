/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_set_elem.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:42:24 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:42:25 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include <stdlib.h>

int	ft_stat_extand_set_elem(t_stat_extand *extand, char *n_file, int id)
{
	if (!extand || !n_file || extand->size <= id)
		return (0);
	if (!(extand->tab[id].name = ft_strdup(n_file)))
		return (0);
	if (!(extand->tab[id].data = malloc(sizeof(struct stat))))
		return (0);
	lstat(n_file, extand->tab[id].data);
	return (1);
}
