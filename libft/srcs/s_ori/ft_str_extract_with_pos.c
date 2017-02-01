/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_extract_with_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:48:30 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/11 20:22:39 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_str_extract_with_pos(char *str, int c1, int c2)
{
	char	*new;
	int		count;

	new = 0;
	count = 0;
	if (!str || c1 > c2 || !(new = malloc(sizeof(char) * (c2 - c1 + 1))))
		return (0);
	while (str[count] && count + c1 < c2)
	{
		new[count] = str[c1 + count];
		count++;
	}
	new[count] = '\0';
	return (new);
}
