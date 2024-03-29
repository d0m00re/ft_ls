/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_d_rep.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 14:18:58 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/04 14:18:59 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

DIR	*ft_recup_d_rep(char *name)
{
	DIR *rep;

	if (!(rep = opendir(name)))
		return (0);
	return (rep);
}
