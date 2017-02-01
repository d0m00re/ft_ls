/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 18:15:22 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:21:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ori.h"

static int		ft_display_error(char *const *argv, int *x, int c_argc)
{
	ft_putstr_fd(argv[0], 2);
	ft_putstr_fd(" : illegal option -- ", 2);
	ft_putchar_fd(argv[c_argc][(*x)], 2);
	ft_putchar_fd('\n', 2);
	(*x)++;
	return ('?');
}

static int		ft_manage_error_getopt(int argc, char *const *argv,\
				int *c_argc, int *x)
{
	if (argc == 1 || (*c_argc) >= argc || argv[(*c_argc)][0] != '-' ||\
	ft_strlen(argv[(*c_argc)]) <= 1)
		return (-1);
	if (argv[(*c_argc)][(*x)] == '\0' && (*x) != 0)
	{
		(*c_argc)++;
		(*x) = 0;
		if ((*c_argc) >= argc || argv[(*c_argc)][0] != '-')
			return (-1);
	}
	return (0);
}

int				ft_getopt(int argc, char *const *argv, const char *optstring)
{
	static int	c_argc = 1;
	static int	x = 0;
	int			count;

	count = 0;
	if (ft_manage_error_getopt(argc, argv, &c_argc, &x) == -1)
		return (-1);
	if (x == 0 && argv[c_argc][x] == '-')
		x++;
	while (optstring[count])
	{
		if (optstring[count] == argv[c_argc][x])
		{
			x++;
			return (optstring[count]);
		}
		count++;
	}
	return (ft_display_error(argv, &x, c_argc));
}
