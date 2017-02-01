/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 19:19:35 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:47:44 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

static char	ft_value_flag(char c)
{
	if (c == 'R')
		return (0x10);
	else if (c == 'l')
		return (0x8);
	else if (c == 'a')
		return (0x4);
	else if (c == 'r')
		return (0x2);
	else if (c == 't')
		return (0x1);
	return (0);
}

char		ft_main_flag(int argc, char **argv)
{
	int		c;
	int		x;
	char	flag;
	char	add;

	c = 1;
	x = 1;
	flag = 0;
	while (c < argc)
	{
		if (argv[c][0] == '-')
		{
			while (argv[c][x])
			{
				add = ft_value_flag(argv[c][x]);
				if ((add & flag) == 0)
					flag += add;
				x++;
			}
			x = 1;
		}
		c++;
	}
	return (flag);
}

void		ft_main_flag2(char *str, char *flag)
{
	int		c;
	char	add;

	c = 1;
	while (str[c])
	{
		add = ft_value_flag(str[c]);
		if ((add & (*flag)) == 0)
			(*flag) += add;
		c++;
	}
}
