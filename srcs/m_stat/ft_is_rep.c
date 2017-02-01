/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_rep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:57:14 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:57:22 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include "ft_stat.h"

int	ft_is_rep(char *name)
{
	struct stat file_st;

	stat(name, &file_st);
	if (ft_stat_type_file(&file_st) == 2)
		return (1);
	return (0);
}
