/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_user.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:59:20 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/10 22:34:31 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stat.h"
#include <pwd.h>

void				ft_display_user(struct stat *statos, int nb_space)
{
	struct passwd	*pw;
	int				size;

	pw = getpwuid(statos->st_uid);
	size = ft_strlen(pw->pw_name);
	ft_putstr(pw->pw_name);
	ft_putstr_nb_char(' ', nb_space + 1 - size);
}
