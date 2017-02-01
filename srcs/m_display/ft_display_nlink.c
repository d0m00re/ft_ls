/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_nlink.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:58:11 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/06 16:58:14 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

void	ft_display_nlink(struct stat *statos, int nb_space)
{
	long size;

	size = ft_size_long(statos->st_nlink);
	ft_putstr_nb_char(' ', nb_space - size);
	ft_putnbr_ll(statos->st_nlink);
	ft_putchar(' ');
}
