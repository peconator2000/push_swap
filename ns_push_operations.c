/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_push_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:11:32 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:11:40 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **lst, t_stack *newelem)
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

void	push_b(t_stack **a, t_stack **b, int wis)
{
	t_stack	*mid_a;
	t_stack	*mid_b;

	if (!*a)
		return ;
	mid_a = *a;
	mid_b = *b;
	*a = (*a)->next;
	mid_a->next = mid_b;
	*b = mid_a;
	(*b)->stack = 'b';
	if (wis)
		write(1, "pb\n", 3);
}

void	push_a(t_stack **a, t_stack **b, int wis)
{
	t_stack	*mid_a;
	t_stack	*mid_b;

	if (!*b)
		return ;
	mid_a = *a;
	mid_b = *b;
	*b = (*b)->next;
	mid_b->next = mid_a;
	*a = mid_b;
	(*a)->stack = 'a';
	if (wis)
		write(1, "pa\n", 3);
}
