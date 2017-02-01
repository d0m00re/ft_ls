/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:48:09 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/06 16:48:11 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_tab_int(int *tab, int size, int value)
{
	if (!tab)
		return ;
	while (size)
	{
		tab[size - 1] = value;
		size--;
	}
}
