/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat_type_time.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:38:46 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 15:39:18 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include "time.h"

int	ft_stat_type_time(time_t t)
{
	time_t actual;

	time(&actual);
	if (t <= actual - SIX_MONTH)
		return (1);
	else if (actual < t)
		return (1);
	return (0);
}
