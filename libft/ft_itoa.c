/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:21:35 by mbari             #+#    #+#             */
/*   Updated: 2019/10/20 17:00:51 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	r;
	char			*str;
	int				int_size;

	i = 0;
	int_size = ft_intsize(n);
	if (n <= 0)
		 int_size += 1;
	if (!(str = (char *)malloc(sizeof(char) * int_size + 1)))
		return (NULL);
	if (n <= 0)
	{
		i = 1;
		str[0] = n == 0 ? '0' : '-';
		r = -n;
	}
	else
		r = n;
	str[int_size] = '\0';
	while (i <= --int_size)
	{
		str[int_size] = r % 10 + '0';
		r /= 10;
	}
	return (str);
}
