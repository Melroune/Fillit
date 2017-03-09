/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:13:42 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:13:44 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_place(t_tetri *mainlist, char **final_carre, int y, int x)
{
	mainlist->is_valid = 1;
	while (mainlist->p->next != NULL)
	{
		final_carre[y + mainlist->p->y][x + mainlist->p->x] =
		mainlist->tetri_number + 'A';
		mainlist->p = mainlist->p->next;
	}
	final_carre[y + mainlist->p->y][x + mainlist->p->x] =
	mainlist->tetri_number + 'A';
	while (mainlist->p->prev)
		mainlist->p = mainlist->p->prev;
}
