/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_init_with_basic_inf.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 14:10:09 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 21:09:54 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

t_stat_extand		*ft_stat_extand_init_with_basic_inf(char *rep_path)
{
	t_stat_extand	*extand;
	DIR				*rep;
	struct stat		sb;
	struct dirent	*ent;
	int				size;

	size = 0;
	if (!rep_path || !(extand = malloc(sizeof(t_stat_extand)))\
	|| !(rep = ft_recup_d_rep(rep_path)))
		return (0);
	if ((ent = readdir(rep)) == 0)
		return (0);
	stat(rep_path, &sb);
	size = ft_rep_nb_file(rep_path);
	if (!(extand->tab = malloc(sizeof(t_stat) * size)))
		return (0);
	extand->path = ft_strdup(rep_path);
	extand->size = size;
	closedir(rep);
	return (extand);
}
