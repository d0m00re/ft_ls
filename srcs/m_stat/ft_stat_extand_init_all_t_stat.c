/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_extand_init_all_t_stat.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:42:00 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 23:01:58 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

t_stat_extand	*ft_stat_extand_init_all_t_stat(char *rep_path)
{
	char			*temp;
	int				count;
	t_stat_extand	*extand;
	struct dirent	*ent;
	DIR				*rep;

	count = 0;
	if (!(extand = ft_stat_extand_init_with_basic_inf(rep_path)) ||\
	!(rep = ft_recup_d_rep(rep_path)))
		return (0);
	while ((ent = readdir(rep)) != NULL && count < extand->size)
	{
		if (!(extand->tab[count].name = ft_strdup(ent->d_name)))
			return (0);
		extand->tab[count].data = malloc(sizeof(struct stat));
		temp = ft_strdup(rep_path);
		ft_str_resize_concat(&temp, "/");
		ft_str_resize_concat(&temp, ent->d_name);
		lstat(temp, extand->tab[count].data);
		count++;
		ft_strdel(&temp);
	}
	extand->size = count;
	closedir(rep);
	return (extand);
}
