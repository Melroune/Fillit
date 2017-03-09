/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerkeb <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 23:13:16 by akerkeb           #+#    #+#             */
/*   Updated: 2016/01/21 23:13:19 by akerkeb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memalloc(size_t size)
{
	char *res;

	res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	ft_memset((void *)res, '\0', size);
	return (res);
}
