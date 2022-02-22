/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_traffic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:29:07 by vellie            #+#    #+#             */
/*   Updated: 2021/09/18 17:07:52 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	how_in_clust(t_stack *head)
{
	int	cur_flag;
	int	res;

	res = 0;
	if (!head)
		return (0);
	cur_flag = head->num_clust;
	while (head && head->num_clust == cur_flag)
	{
		res++;
		head = head->next;
	}
	return (res);
}

int	first_step(t_stack *a, t_stack *b)
{
	while (a)
	{
		if (a->num_clust != 0)
			return (0);
		a = a->next;
	}
	if (ft_lstsize(b) != 0)
		return (0);
	return (1);
}

void	main_traffic(t_stack **a, t_stack **b, int *next)
{
	if (is_all_rigth(*a, *b) || first_step(*a, *b))
		return ;
	while ((*a)->sort_ind == *next && can_i(*a, *next, ft_lstsize(*a)))
	{
		if ((*a)->num_clust != -1)
		{
			(*next) += 1;
			(*a)->num_clust = -1;
		}
		(*a)->is_remind = 0;
		rotate_a(a, 1);
	}
}

static int	last_pair(t_stack **a, t_stack **b, int next)
{
	if ((*a)->sort_ind == 0 && (*b)->sort_ind == next)
		return (1);
	else
		return (0);
}

void	ft_traffic_cop(t_stack **a, t_stack **b, int *next)
{
	while (ft_lstsize(*b))
	{
		if ((*b) && (((*b)->data < (*a)->data) || last_pair(a, b, *next)))
			push_a(a, b, 1);
		if ((*a)->num_clust != -1)
		{
			*next = (*next) + 1;
			(*a)->num_clust = -1;
		}
		(*a)->is_remind = 0;
		rotate_a(a, 1);
	}
}
