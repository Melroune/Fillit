/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:13:04 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:37:38 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_cut_tetri(char *tetri)
{
	int			x;
	t_piece		*p;
	t_piece		*temp;

	p = NULL;
	x = 0;
	while (tetri[x] != '\0')
	{
		if (tetri[x] == '#')
		{
			temp = (t_piece *)malloc(sizeof(t_piece));
			temp->x = x % 5;
			temp->y = x / 5;
			temp->next = NULL;
			temp->prev = p;
			p = (p == NULL ? temp : p);
			p->next = (p == NULL ? NULL : temp);
			p = (p == NULL ? p : p->next);
		}
		x++;
	}
	while (p->prev)
		p = p->prev;
	p = ft_cut_tetri_plus(p);
	return (p);
}
