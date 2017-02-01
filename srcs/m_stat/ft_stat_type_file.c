/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_type_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 21:51:33 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:52:10 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

int	ft_stat_type_file(struct stat *data)
{
	if ((data->st_mode & 0170000) == 0120000)
		return (3);
	else if ((data->st_mode & 0170000) == 0100000)
		return (1);
	else if ((data->st_mode & 0170000) == 0040000)
		return (2);
	else if ((data->st_mode & 0170000) == 0020000)
		return (4);
	else if ((data->st_mode & 0170000) == 0060000)
		return (5);
	else if ((data->st_mode & 0170000) == 0010000)
		return (6);
	else if ((data->st_mode & 0170000) == 0140000)
		return (7);
	return (0);
}
