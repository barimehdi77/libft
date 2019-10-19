/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:38:37 by mbari             #+#    #+#             */
/*   Updated: 2019/10/17 18:59:27 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	char	tolower;

	tolower = c;
	if (tolower >= 'A' && tolower <= 'Z')
		return (tolower + 32);
	return (c);
}