/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:16:00 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:16:08 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void		ft_sorted_tab(int argc, char **argv, int c)
{
	char	*temp;
	int		count;

	count = c;
	while (count != argc - 1)
	{
		if (ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			temp = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = temp;
			count = c;
		}
		else
			count++;
	}
}
