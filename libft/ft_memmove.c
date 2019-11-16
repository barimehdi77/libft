/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:23:31 by abdel-ke          #+#    #+#             */
/*   Updated: 2019/11/11 17:23:37 by abdel-ke         ###   ########.fr       */
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
