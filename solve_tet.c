/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_tet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:14:53 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:41:23 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_solve_tetri(t_tetri *mainlist, int size)
{
	int		x;
	int		y;
	char	**final_carre;
	t_tetri	*tmp;

	x = 0;
	y = 0;
	tmp = mainlist;
	final_carre = ft_create_table(size);
	if (ft_solve_tetri_plus(mainlist, final_carre, y, x))
		ft_puttab(final_carre);
	else
	{
		free(final_carre);
		while (mainlist)
		{
			mainlist->is_valid = 0;
			mainlist = mainlist->next;
		}
		return (ft_solve_tetri(tmp, (size + 1)));
	}
	return (1);
}
