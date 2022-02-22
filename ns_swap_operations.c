/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:28:20 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:28:01 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **head)
{
	t_stack	*mid;

	if (ft_lstsize(*head) < 2)
		return ;
	mid = (*head)->next;
	(*head)->next = mid->next;
	mid->next = *head;
	*head = mid;
}

void	swap_b(t_stack **head, int wis)
{
	swap(head);
	if (wis)
		write(1, "sb\n", 3);
}

void	swap_a(t_stack **head, int wis)
{
	swap(head);
	if (wis)
		write(1, "sa\n", 3);
}

void	swap_all(t_stack **a, t_stack **b, int wis)
{
	swap(a);
	swap(b);
	if (wis)
		write(1, "ss\n", 3);
}
