/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 20:36:30 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 20:34:56 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_stat.h"
#include "ft_display.h"
#include "ft_1d_int.h"
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_flag.h"
#include "ft_manage.h"
#include <time.h>
#include "ft_1d_int.h"

static int		ft_basic_ls(int argc, int first_arg, char flag)
{
	if (argc == 1 || argc == first_arg)
	{
		ft_ls(flag, ".");
		return (1);
	}
	return (0);
}

int				main(int argc, char **argv)
{
	char		flag;
	int			first_arg;
	t_1d_int	*tab;
	int			tmp;

	if ((flag = ft_manage_flag(argc, argv)) == 1)
		return (1);
	first_arg = ft_found_first_name_file(argc, argv);
	if (ft_basic_ls(argc, first_arg, flag))
		return (0);
	first_arg = ft_found_first_name_file(argc, argv);
	ft_sorted_tab(argc, argv, first_arg);
	tab = ft_affect_data_at_table(argc, argv, first_arg);
	ft_display_error_file(argv, first_arg, tab);
	ft_display_basic_file_argv(argv, tab, first_arg, flag);
	tmp = 0;
	while (tmp + first_arg < argc)
	{
		if (tab->tab[tmp] >= 4)
			ft_ls(flag, ft_strdup(argv[first_arg + tmp]));
		tmp++;
	}
	ft_1d_int_destruct(&tab);
	return (1);
}
