/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_remind_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:24:15 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:24:16 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	remind_finder_b(t_stack *head, int med)
{
	while (head)
	{
		if ((head)->sort_ind >= med)
			head->is_remind = 1;
		else
			head->is_remind = 0;
		head = head->next;
	}
}

static void	rem_proc(t_stack **b, int *how)
{
	if (*how > 0)
		while ((*how)--)
			rotate_b(b, 1);
	else
	{
		(*how) *= -1;
		while ((*how)--)
			rev_rotate_b(b, 1);
	}
}

void	reminder_b(t_stack **a, t_stack **b)
{
	int	med;
	int	push_goal;
	int	y;
	int	how;

	new_reboot(*b);
	y = 0;
	med = clust_min(*b) + 6;
	push_goal = clust_max(*b) - clust_min(*b) + 1 - 6;
	remind_finder_b(*b, med);
	while (y < push_goal)
	{
		how = rotate_remind(*b);
		if ((*b)->is_remind)
		{
			(*b)->is_remind = 0;
			(*b)->num_clust++;
			push_a(a, b, 1);
			remind_finder_b(*b, med);
			(y)++;
		}
		else
			rem_proc(b, &how);
	}
}
