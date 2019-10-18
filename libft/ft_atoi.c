/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:05:06 by mbari             #+#    #+#             */
/*   Updated: 2019/10/18 18:00:53 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	long long int	r;
	long long int	result;

	i = 0;
	r = 1;
	result = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == ' ' ||
			str[i] == '\t' || str[i] == '\v' ||
			str[i] == '.' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		r = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (r == -1)
		return (-result);
	return (result);
}
