/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:24:14 by mbari             #+#    #+#             */
/*   Updated: 2019/10/20 20:41:27 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char *d;
	unsigned const char *s;

	i = 0;
	d = (unsigned const char *)s1;
	s = (unsigned const char *)s2;
	if (s1 == 0 && s2 == 0)
		return (0);
	while (n--)
	{
		if (d[i] != s[i])
			return ((int)(d[i] - s[i]));
		i++;
	}
	return (0);
}
