/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_rotate_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:25:48 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:25:48 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **head)
{
	t_stack	*newhead;
	t_stack	*mid;

	if (ft_lstsize(*head) < 2)
		return ;
	newhead = (*head)->next;
	mid = *head;
	while (mid->next)
		mid = mid->next;
	(*head)->next = 0;
	mid->next = *head;
	(*head) = newhead;
}

void	rotate_a(t_stack **a, int wis)
{
	rotate(a);
	if (wis)
		write(1, "ra\n", 3);
}

void	rotate_b(t_stack **b, int wis)
{
	rotate(b);
	if (wis)
		write(1, "rb\n", 3);
}

void	rotate_all(t_stack **a, t_stack **b, int wis)
{
	rotate(a);
	rotate(b);
	if (wis)
		write(1, "rr\n", 3);
}
