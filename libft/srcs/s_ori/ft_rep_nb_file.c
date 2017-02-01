/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rep_nb_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 19:42:13 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 20:23:20 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <dirent.h>

int					ft_rep_nb_file(char *path)
{
	DIR				*rep;
	struct dirent	*ent;
	int				c;

	c = 0;
	rep = opendir(path);
	while ((ent = readdir(rep)))
		c++;
	closedir(rep);
	return (c);
}
