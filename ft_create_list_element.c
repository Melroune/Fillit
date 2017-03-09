/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list_element.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:12:19 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:40:49 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_create_list_element(char *tetrim, int x)
{
	t_tetri *l_tmp;

	l_tmp = (t_tetri *)malloc(sizeof(t_tetri));
	if (!l_tmp)
		return (NULL);
	l_tmp->p = ft_cut_tetri(tetrim);
	l_tmp->tetri_number = x;
	l_tmp->is_valid = 0;
	l_tmp->next = NULL;
	return (l_tmp);
}
