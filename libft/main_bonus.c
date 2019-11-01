/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:22:32 by mbari             #+#    #+#             */
/*   Updated: 2019/10/31 01:16:58 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_plusone(void *s)
{
	printf("passage %s\n", s);
}
void	delete(void *content)
{
	free(content);
}

int		main(void)
{
	t_list	*new = malloc(sizeof(t_list));
	new->content = ft_strdup("hello");
	new->next = NULL;
	ft_lstdelone(new, &delete);
	printf("%s",new->content);
	//free(new);
	t_list	*begin;
	//t_list	*elem;
	t_list	*tmp;

	begin = ft_lstnew("1");
	ft_lstadd_back(&begin, ft_lstnew("2"));
	ft_lstadd_back(&begin, ft_lstnew("3"));
	ft_lstadd_back(&begin, ft_lstnew("4"));
   	t_list *de = ft_lstnew("5");
	//ft_lstadd_back(&begin, de);
	ft_lstadd_back(&begin, ft_lstnew("6"));
	ft_lstadd_back(&begin, ft_lstnew("7"));
	//int i = ft_lstsize(begin);
	//printf("The size of The List : %d\n", i);
	//free(de);
	tmp = begin;
//	tmp = ft_lstmap(begin, &ft_plusone);
	/*
	printf("The First List :\n");
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	//ft_lstclear(&begin, &delete);
	printf("The list after Delete :\n");
	while (begin)
	{
		printf("%s\n", begin->content);
		begin = begin->next;
	}*/
}
