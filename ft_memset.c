/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:13:28 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:13:31 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*x;

	i = 0;
	if (len == 0)
		return (b);
	x = (char *)b;
	while (len--)
	{
		x[i] = c;
		i++;
	}
	return (b);
}
