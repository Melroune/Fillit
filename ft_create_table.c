/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:12:33 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:12:35 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_create_table(int size)
{
	int		len_cub;
	int		x;
	int		y;
	char	**final_tab;

	len_cub = 2;
	while (ft_power_x(len_cub) < (size * 4))
		len_cub++;
	final_tab = (char **)ft_memalloc(sizeof(char *) * (len_cub + 1));
	x = 0;
	while (x < len_cub)
	{
		final_tab[x] = (char *)ft_memalloc(sizeof(char ) * (len_cub + 2));
		y = 0;
		while (y < len_cub)
		{
			final_tab[x][y] = '.';
			y++;
		}
		final_tab[x][y] = '\n';
		x++;
	}
	return (final_tab);
}
