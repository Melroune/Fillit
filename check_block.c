/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:10:37 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:40:26 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_block(char *str)
{
	int y;
	int count_ch;
	int count_diez;
	int t;

	t = 0;
	y = -1;
	count_ch = 0;
	count_diez = 0;
	while (str[++y])
	{
		if ((y == 9 || y == 14 || y == 19) && str[y - 5] != '\n')
			return (0);
		else if (str[y] == '#' && (str[y - 1] == '#' || str[y + 1] == '#' ||
		str[y + 5] == '#' || str[y - 5] == '#'))
			count_diez++;
		if (str[y] == '#' && ft_check_block_plus(str, y) && !t--)
			count_diez++;
		if (str[y] == '.')
			count_ch++;
	}
	if (count_ch == 12 && count_diez == 5)
		return (1);
	return (0);
}
