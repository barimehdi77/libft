/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:09:08 by mbari             #+#    #+#             */
/*   Updated: 2019/10/22 18:37:32 by mbari            ###   ########.fr       */
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
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (dest == NULL && src == NULL)
		return (0);
	if (ldest < size)
		j = size - ldest - 1;
	i = 0;
	while (i < j && src[i])
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	if (size > ldest)
		return (ldest + lsrc);
	else
		return (lsrc + size);
}
