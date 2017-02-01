/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:29:13 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 19:29:16 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_usage(char *str)
{
	ft_putstr_fd("usage: ft_ls [-", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd("] [file ...]\n", 2);
}
