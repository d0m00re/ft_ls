/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_generate_time.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:00:23 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 19:38:34 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

char	*ft_stat_generate_time(time_t t)
{
	char *str;
	char *data;
	char *data2;

	str = ctime(&t);
	data = ft_str_extract_with_pos(str, 4, 8);
	data2 = ft_str_extract_with_pos(str, 8, 11);
	ft_str_resize_concat(&data, data2);
	ft_strdel(&data2);
	if (ft_stat_type_time(t))
	{
		ft_str_resize_concat(&data, " ");
		data2 = ft_str_extract_with_pos(str, 20, 24);
	}
	else
		data2 = ft_str_extract_with_pos(str, 11, 16);
	ft_str_resize_concat(&data, data2);
	ft_strdel(&data2);
	return (data);
}
