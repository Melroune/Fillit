/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:11:06 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:40:31 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_tetri(char *str)
{
	t_tmp	u;

	u.x = 0;
	u.y = 0;
	while (str[u.x])
	{
		if (!(u.tmp = (char *)ft_memalloc(sizeof(char) * 21)))
			return (0);
		u.i = 0;
		while (u.i < 20 && str[u.i + u.x] && (str[u.i + u.x] == '.' ||
		str[u.i + u.x] == '#' || str[u.i + u.x] == '\n'))
		{
			u.tmp[u.i] = str[u.i + u.x];
			u.i++;
		}
		u.x += u.i;
		if ((u.i != 20 || !(ft_check_block(u.tmp))) || \
		(str[u.x] == '\n' && str[u.x + 1] != '.' && str[u.x + 1] != '#'))
			return (0);
		u.l_tmp = ft_create_list_element(u.tmp, u.y);
		u.head = ft_add_on_list(u.head	, u.l_tmp, u.y);
		u.x++;
		u.y++;
	}
	return (ft_solve_tetri(u.head, u.y));
}
