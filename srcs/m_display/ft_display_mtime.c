/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_mtime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:13:03 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:38:31 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include "ft_display.h"

void		ft_display_mtime(struct stat *statos)
{
	char *str;

	if (!(str = ft_stat_generate_time(statos->st_mtime)))
		return ;
	ft_putstr(str);
	ft_putchar(' ');
	ft_strdel(&str);
}
