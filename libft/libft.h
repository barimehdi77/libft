/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:51:44 by mbari             #+#    #+#             */
/*   Updated: 2019/10/19 12:16:23 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	*ft_memset(void *ptr, int x, size_t len);
void	ft_bzero(void *ptr, size_t l);
void	*ft_memcpy(void *str1, void *str2, size_t n);
void	*ft_memccpy(void *dest, void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
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
