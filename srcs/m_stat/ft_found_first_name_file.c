/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_first_name_file.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 19:54:38 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 19:54:40 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"

int	ft_found_first_name_file(int argc, char **argv)
{
	int c;

	c = 1;
	while (c < argc && argv[c][0] == '-' && ft_strlen(argv[c]) > 1)
		c++;
	return (c);
}
