/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_1d_int_del_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:26:08 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/20 16:28:36 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_1d_int.h"
#include <stdlib.h>

void	ft_1d_int_del_tab(t_1d_int **tab_1d)
{
	if (!tab_1d || !(*tab_1d) || !((*tab_1d)->tab))
		return ;
	free((*tab_1d)->tab);
	(*tab_1d)->tab = 0;
}
