/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lst_oper_func.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:49:59 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 13:01:33 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*new_oper(char stack, char data[])
{
	t_oper	*newel;
	int		size;
	int		i;

	i = 0;
	newel = malloc(sizeof(t_oper));
	size = ft_strlen(data);
	newel->oper = malloc(sizeof(char) * size);
	while (size)
	{
		newel->oper[i] = data[i];
		i++;
		size--;
	}
	newel->oper[i] = '\0';
	newel->stack = stack;
	newel->next = 0;
	return (newel);
}

int	ft_lstsize_oper(t_oper *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstclear_oper(t_oper **lst)
{
	t_oper	*mid;

	if (!(*lst))
		return ;
	while ((*lst))
	{
		mid = (*lst)->next;
		(*lst)->next = 0;
		free((*lst)->oper);
		free((*lst));
		*lst = mid;
	}
}

void	ft_lstadd_front_oper(t_oper **lst, t_oper *newelem)
{
	if (!newelem)
		return ;
	if (lst == 0)
	{
		*lst = newelem;
		return ;
	}
	newelem->next = *lst;
	*lst = newelem;
}

void	ft_lstadd_back_oper(t_oper **lst, t_oper *newel)
{
	t_oper	*mid;

	if (!newel)
		return ;
	if (!(*lst))
	{
		*lst = newel;
		return ;
	}
	mid = *lst;
	while (mid->next)
		mid = mid->next;
	mid->next = newel;
}
