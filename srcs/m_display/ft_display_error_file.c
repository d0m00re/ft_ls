/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_error_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 20:27:27 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 20:27:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_1d_int.h"
#include "ft_ori.h"

void	ft_display_error_file(char **argv, int id_b, t_1d_int *tab)
{
	int c;

	c = 0;
	while (c < tab->len)
	{
		if (tab->tab[c] == 2)
		{
			ft_putstr_fd(argv[0], 2);
			ft_putstr_fd(": ", 2);
			ft_putstr_fd(argv[c + id_b], 2);
			ft_putstr_fd(": No such file or directory\n", 2);
		}
		c++;
	}
}
