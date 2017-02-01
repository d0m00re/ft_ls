/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_modif_end_nb_sep.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:06:40 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/06 17:07:02 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_modif_end_nb_sep(char *str, char sep, int nb)
{
	int count;
	int nb_sep;

	count = 0;
	nb_sep = 0;
	if (!str)
		return ;
	while (str[count] && nb_sep != nb)
	{
		if (str[count] == sep)
		{
			nb_sep++;
		}
		if (nb_sep != nb)
			count++;
	}
	str[count] = '\0';
}
