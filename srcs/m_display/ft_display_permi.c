/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_permi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:54:47 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 21:16:07 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include "ft_ori.h"

static void	ft_display_type_file(int r)
{
	if (r == 2)
		ft_putchar('d');
	else if (r == 4)
		ft_putchar('c');
	else if (r != 3)
		ft_putchar('-');
	else if (r == 5)
		ft_putchar('b');
	else if (r == 6)
		ft_putchar('p');
	else if (r == 7)
		ft_putchar('s');
	else
		ft_putchar('l');
}

void		ft_display_permi(struct stat *statos)
{
	int		r;

	r = ft_stat_type_file(statos);
	ft_display_type_file(r);
	ft_putchar((statos->st_mode & 0000400) ? 'r' : '-');
	ft_putchar((statos->st_mode & 0000200) ? 'w' : '-');
	ft_putchar((statos->st_mode & 0000100) ? 'x' : '-');
	ft_putchar((statos->st_mode & 0000040) ? 'r' : '-');
	ft_putchar((statos->st_mode & 0000020) ? 'w' : '-');
	ft_putchar((statos->st_mode & 0000010) ? 'x' : '-');
	ft_putchar((statos->st_mode & 0000004) ? 'r' : '-');
	ft_putchar((statos->st_mode & 0000002) ? 'w' : '-');
	ft_putchar((statos->st_mode & 0000001) ? 'x' : '-');
	ft_putchar(' ');
}
