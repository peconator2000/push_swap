/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_rev_rotate_operations.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:25:06 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:25:16 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_stack **head)
{
	t_stack	*mid;
	t_stack	*past;

	mid = *head;
	if (ft_lstsize(*head) < 2)
		return ;
	while (mid->next)
	{
		past = mid;
		mid = mid->next;
	}
	push(head, mid);
	past->next = 0;
}

void	rev_rotate_a(t_stack **a, int wis)
{
	rev_rotate(a);
	if (wis)
		write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stack **b, int wis)
{
	rev_rotate(b);
	if (wis)
		write(1, "rrb\n", 4);
}

void	rev_rotate_all(t_stack **a, t_stack **b, int wis)
{
	rev_rotate(a);
	rev_rotate(b);
	if (wis)
		write(1, "rrr\n", 4);
}
