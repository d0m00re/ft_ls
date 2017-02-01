/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 22:46:24 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:47:14 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_value_flag(char c)
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
