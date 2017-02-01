/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:04:03 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/06 17:04:04 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

void	ft_display_size(struct stat *statos, int nb_space)
{
	long size;

	size = ft_size_long(statos->st_size);
	ft_putstr_nb_char(' ', nb_space - size);
	ft_putnbr_ll(statos->st_size);
	ft_putchar(' ');
}
