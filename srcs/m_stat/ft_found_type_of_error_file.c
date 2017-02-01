/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_type_of_error_file.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 20:32:38 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/12 19:21:33 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_stat.h"
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>

int				ft_found_type_of_error_file(char *name)
{
	DIR			*rep;
	int			temp;
	struct stat *data;

	data = 0;
	errno = 0;
	temp = 0;
	rep = opendir(name);
	if (rep)
		closedir(rep);
	if (errno == 2)
		return (2);
	if (errno == 13)
		temp = 1;
	if (ft_is_rep(name))
		return (4 + temp);
	stat(name, data);
	if (data && S_ISREG(data->st_mode))
		return (3);
	return (6);
}
