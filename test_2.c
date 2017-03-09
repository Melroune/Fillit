/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:15:34 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:41:37 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_test_2(t_tetri *mainlist, char **final_carre, int y, int x)
{
	while (mainlist->p->next != NULL)
	{
		if (final_carre[y + mainlist->p->y] && final_carre
			[y + mainlist->p->y][x + mainlist->p->x] == '.')
			mainlist->p = mainlist->p->next;
		else
		{
			while (mainlist->p->prev)
				mainlist->p = mainlist->p->prev;
			return (0);
		}
	}
	if (final_carre[y + mainlist->p->y] && final_carre
		[y + mainlist->p->y][x + mainlist->p->x] == '.')
	{
		while (mainlist->p->prev)
			mainlist->p = mainlist->p->prev;
		return (1);
	}
	else
	{
		while (mainlist->p->prev)
			mainlist->p = mainlist->p->prev;
		return (0);
	}
}
