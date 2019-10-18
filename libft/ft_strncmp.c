/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:48:03 by mbari             #+#    #+#             */
/*   Updated: 2019/10/18 17:48:05 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || i > n)
            return (0);
        i++;
    }
        return ((int)str1[i] - (int)str2[i]);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "ab";
    char str2[] = "ab" ;
    printf("My fonc is : %d",ft_strncmp(str1,str2,3));
    printf("\nthe original is : %d",strncmp(str1,str2,3));
}
