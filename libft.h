/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:28:06 by mbari             #+#    #+#             */
/*   Updated: 2019/10/18 18:28:08 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:43:15 by mbari             #+#    #+#             */
/*   Updated: 2019/10/18 18:26:10 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int a);
int		ft_isalpha(int c);
int		ft_isascii(int asci);
int		ft_isdigit(int d);
int		ft_isprint(int p);
char	*ft_strchr(const char *str, int c);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strrchr(const char *s, int r);
int		ft_tolower(int c);
int		ft_toupper(int i);
#endif
