/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_tet_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:15:08 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:41:34 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_solve_tetri_plus(t_tetri *mainlist, char **final, int y, int x)
{
	t_tetri *temp;

	if ((temp = mainlist) != NULL && ft_test_isvalid(temp))
		return (1);
	while (temp != NULL)
	{
		while (final[y])
		{
			if (temp->is_valid == 0 && ft_test_2(temp, final, y, x))
			{
				ft_place(temp, final, y, x);
				if (ft_solve_tetri_plus(mainlist, final, y, x))
					return (1);
				else
					ft_unplace(temp, final, y, x);
			}
			x = (final[y][x] == '\n' && final[y]) ? -1 : x + 1;
			y = (final[y][x] == '\n' && final[y]) ? y + 1 : y;
		}
		x = 0;
		y = 0;
		temp = temp->next;
	}
	return (0);
}
