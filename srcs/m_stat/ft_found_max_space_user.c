/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_max_space_user.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:20:37 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:00:20 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include <pwd.h>
#include <errno.h>

int					ft_found_max_space_user(t_stat_extand *extand)
{
	int				c;
	int				tmp;
	int				max;
	struct passwd	*pw;

	c = 0;
	max = 0;
	errno = 0;
	while (extand && c < extand->size)
	{
		pw = getpwuid(extand->tab[c].data->st_uid);
		if (!pw)
			return (-1);
		tmp = ft_strlen(pw->pw_name);
		if (max < tmp)
			max = tmp;
		c++;
	}
	return (max + 1);
}
