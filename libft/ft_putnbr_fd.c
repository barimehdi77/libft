/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 22:53:06 by mbari             #+#    #+#             */
/*   Updated: 2019/10/22 13:36:51 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int a;

	a = n;
	if (n <= 0)
	{
		ft_putchar_fd('-', fd);
		a = -n;
	}
	if (a > 9)
	{
		ft_putnbr_fd((a / 10), fd);
		ft_putchar_fd((a % 10) + '0', fd);
	}
	else
		ft_putchar_fd(a + '0', fd);
}
