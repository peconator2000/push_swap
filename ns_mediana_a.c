/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_mediana_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:52:08 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:01:31 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	can_i(t_stack *head, int next, int size)
{
	t_stack	*mid;

	mid = head;
	while (mid->next)
		mid = mid->next;
	if (next == 0)
	{
		if (mid->sort_ind == size - 1)
			return (1);
	}
	else
	{
		if (mid->sort_ind == next - 1)
			return (1);
	}
	return (0);
}

static void	local_traffic(t_stack **a, int *next, int *done)
{
	(*done)++;
	if ((*a)->num_clust != -1)
		(*next)++;
	(*a)->num_clust = -1;
	(*a)->is_remind = 0;
	rotate_a(a, 1);
}

static void	local_mmove(t_stack **a, t_stack **b, int *move_count)
{
	push_b(a, b, 1);
	(*move_count)++;
}

void	mediana_move_a(t_stack **a, t_stack **b, int med, int *next)
{
	int	move_count;
	int	push_goal;
	int	cur_fl;
	int	count;
	int	size;

	size = clust_max(*a) - clust_min(*a) + 1;
	count = size;
	move_count = 0;
	cur_fl = (*a)->num_clust;
	push_goal = med - clust_min(*a) + 1;
	while (move_count < push_goal && (*a)->num_clust == cur_fl)
	{
		if (cur_fl != 1 && (*a)->sort_ind == *next && can_i(*a, *next, size))
			local_traffic(a, next, &move_count);
		else if ((*a)->sort_ind <= med)
			local_mmove(a, b, &move_count);
		else
			rotate_a(a, 1);
		count--;
	}
}

int	mediana_finder_a(t_stack **a, t_stack **b, int *next)
{
	int	current_flag;
	int	mediana;
	int	min;

	current_flag = (*a)->num_clust;
	min = clust_min(*a);
	mediana = (clust_max(*a) - min) / 2 + min;
	mediana_move_a(a, b, mediana, next);
	return (current_flag);
}
