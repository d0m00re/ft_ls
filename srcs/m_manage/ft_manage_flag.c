/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:52:27 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 19:52:28 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_manage.h"

char	ft_manage_flag(int argc, char **argv)
{
	char c;
	char flag;

	flag = 0;
	while ((c = ft_getopt(argc, argv, "Ralrt")) != -1 && c != '?')
		flag |= ft_value_flag(c);
	if (c == '?')
	{
		ft_usage("Ralrt");
		return (1);
	}
	return (flag);
}
