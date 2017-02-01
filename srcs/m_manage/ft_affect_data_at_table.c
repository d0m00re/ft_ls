/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affect_data_at_table.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:07:58 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:21:52 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"

t_1d_int		*ft_affect_data_at_table(int argc, char **argv, int id_b)
{
	int			c;
	t_1d_int	*tab;

	c = 0;
	tab = 0;
	tab = ft_1d_int_init(argc - id_b);
	ft_1d_int_init_values(&tab);
	while (c < tab->len)
	{
		ft_1d_int_set_value_with_id(&tab, c,\
		ft_found_type_of_error_file(argv[c + id_b]));
		c++;
	}
	return (tab);
}
