/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:53:34 by mbari             #+#    #+#             */
/*   Updated: 2019/10/22 18:48:13 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *l, const char *s, size_t len)
{
	size_t	j;

	if (*s == '\0')
		return ((char *)l);
	while (*l != '\0' && len != 0)
	{
		j = 0;
		while (l[j] == s[j] && len-- != 0)
		{
			if (s[j + 1] == '\0')
				return ((char *)l);
			j++;
		}
		l++;
		len--;
	}
	return (NULL);
}
