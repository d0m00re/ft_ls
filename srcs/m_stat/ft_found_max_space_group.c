/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_max_space_group.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:23:15 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:54:31 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include <grp.h>

int					ft_found_max_space_group(t_stat_extand *extand)
{
	struct group	*gp;
	int				tmp;
	int				max;
	int				c;

	c = 0;
	max = 0;
	while (c < extand->size)
	{
		gp = getgrgid(extand->tab[c].data->st_gid);
		if (!gp)
			return (-1);
		tmp = ft_strlen(gp->gr_name);
		if (max < tmp)
			max = tmp;
		c++;
	}
	return (max);
}
