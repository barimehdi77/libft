/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:40:39 by mbari             #+#    #+#             */
/*   Updated: 2019/11/19 16:41:32 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (dst == src)
		return (NULL);
	i = 0;
	if (src > dst)
		while (len > i)
		{
			dstt[i] = srcc[i];
			i++;
		}
	else
		while (len)
		{
			dstt[len - 1] = srcc[len - 1];
			len--;
		}
	return (dst);
}
