/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:09:08 by mbari             #+#    #+#             */
/*   Updated: 2019/10/23 19:45:18 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ldest;
	size_t	lsrc;
	size_t	j;

	j = 0;
	if (dest == NULL && src == NULL)
		return (0);
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (ldest < size)
		j = size - ldest - 1;
	else
		return (lsrc + size);
	i = 0;
	while (i < j && src[i])
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (lsrc + ldest);
}
