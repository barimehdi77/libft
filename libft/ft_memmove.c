/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:05:07 by mbari             #+#    #+#             */
/*   Updated: 2019/10/31 00:42:36 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return ((void *)NULL);
	i = -1;
	if (len)
	{
		if (src < dst)
		{
			len--;
			while (++i <= len)
				d[len - i] = s[len - i];
		}
		else
			while (len--)
				*d++ = *s++;
	}
	return (dst);
}
