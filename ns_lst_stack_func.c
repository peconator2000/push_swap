/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lst_stack_func.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:50:58 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:30:57 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int data)
{
	t_stack	*newel;

	newel = (t_stack *)malloc(sizeof(*newel));
	if (!newel)
		return (0);
	newel->data = data;
	newel->next = 0;
	newel->num_clust = 0;
	newel->sort_ind = -1;
	newel->stack = 'a';
	newel->is_remind = 0;
	return (newel);
}

int	ft_lstsize(t_stack *lst)
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

void	ft_lstclear(t_stack **lst)
{
	t_stack	*mid;

	if (!(*lst))
		return ;
	while ((*lst))
	{
		mid = (*lst)->next;
		(*lst)->next = 0;
		free((*lst));
		*lst = mid;
	}
}

void	ft_lstadd_front(t_stack **lst, t_stack *newelem)
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
