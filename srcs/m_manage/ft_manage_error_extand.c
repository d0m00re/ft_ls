/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_error_extand.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 20:23:59 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:21:32 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"

int			ft_manage_error_extand(t_stat_extand *extand, char *path)
{
	char	*temp;

	temp = 0;
	if (!extand)
	{
		if (!(temp = ft_strdup(path)))
			return (1);
		while (ft_strchr(temp, '/'))
			ft_str_cut_includ_behind_sep(temp, '\n');
		ft_putstr_fd("ls: ", 2);
		ft_putstr_fd(temp, 2);
		ft_putstr_fd(": Permission denied\n", 2);
		ft_strdel(&temp);
		return (1);
	}
	return (0);
}
