/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_tet_plus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:12:51 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:12:54 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_cut_tetri_plus(t_piece *p)
{
	int xtemp;
	int ytemp;

	ytemp = p->y;
	xtemp = p->x;
	while (p->next != NULL)
	{
		ytemp = (ytemp > p->y ? p->y : ytemp);
		xtemp = (xtemp > p->x ? p->x : xtemp);
		p = p->next;
	}
	ytemp = (ytemp > p->y ? p->y : ytemp);
	xtemp = (xtemp > p->x ? p->x : xtemp);
	while (p->prev != NULL)
	{
		p->y -= ytemp;
		p->x -= xtemp;
		p = p->prev;
	}
	p->y -= ytemp;
	p->x -= xtemp;
	return (p);
}
