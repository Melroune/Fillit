/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isvalid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:16:08 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:41:43 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_test_isvalid(t_tetri *temp)
{
	while (temp != NULL)
	{
		if (temp->is_valid == 0)
			return (0);
		temp = temp->next;
	}
	return (1);
}
