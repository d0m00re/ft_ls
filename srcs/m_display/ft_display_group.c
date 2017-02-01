/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_group.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:59:41 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:38:08 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include <grp.h>

void				ft_display_group(struct stat *statos, int nb_space)
{
	struct group	*gp;
	int				size;

	gp = getgrgid(statos->st_gid);
	size = ft_strlen(gp->gr_name);
	ft_putstr(gp->gr_name);
	ft_putstr_nb_char(' ', nb_space - size);
	ft_putchar(' ');
}
