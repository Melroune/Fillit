/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unplace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:16:25 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:41:48 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_unplace(t_tetri *mainlist, char **final_carre, int y, int x)
{
	mainlist->is_valid = 0;
	while (mainlist->p->next != NULL)
	{
		final_carre[y + mainlist->p->y][x + mainlist->p->x] = '.';
		mainlist->p = mainlist->p->next;
	}
	final_carre[y + mainlist->p->y][x + mainlist->p->x] = '.';
	while (mainlist->p->prev)
		mainlist->p = mainlist->p->prev;
}
