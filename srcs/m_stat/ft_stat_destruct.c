/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_destruct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 23:38:29 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 21:12:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stat.h"

void	ft_stat_destruct(t_stat **stat)
{
	if (stat && *stat && (*stat)->name)
	{
		free((*stat)->name);
		(*stat)->name = 0;
		*stat = 0;
	}
}
