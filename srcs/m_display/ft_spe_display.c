/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spe_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:40:33 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/12 17:40:36 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_spe_display(char *str)
{
	int	count;

	if (!str)
		return ;
	count = ft_strlen(str);
	while (count != 0 && str[count] != '/')
		count--;
	if (str[count] == '/')
		ft_putstr_fd(&(str[count + 1]), 2);
	else
		ft_putstr_fd(&(str[count]), 2);
}
