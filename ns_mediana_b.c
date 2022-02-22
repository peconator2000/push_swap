/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_mediana_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:05:34 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:34:47 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reboot_clust_num(t_stack *head, int current_flag)
{
	while (head)
	{
		if (head->num_clust == current_flag)
			head->num_clust ++;
		head = head->next;
	}
}

int	clust_max(t_stack *head)
{
	int	cur_flag;
	int	max;

	if (!head)
		return (-1);
	cur_flag = head->num_clust;
	max = head->sort_ind;
	while (head && (head->num_clust == cur_flag))
	{
		if (head->sort_ind > max)
			max = head->sort_ind;
		head = head->next;
	}
	return (max);
}

int	clust_min(t_stack *head)
{
	int	cur_flag;
	int	min;

	if (!head)
		return (-1);
	cur_flag = head->num_clust;
	min = head->sort_ind;
	while (head && (head->num_clust == cur_flag))
	{
		if (head->sort_ind < min)
			min = head->sort_ind;
		head = head->next;
	}
	return (min);
}

void	mediana_move_b(t_stack **a, t_stack **b, int med)
{
	int	move_count;
	int	push_goal;
	int	cur_flag;
	int	size;

	size = clust_max(*b) - clust_min(*b) + 1;
	push_goal = size - (med - clust_min(*b) + 1);
	move_count = 0;
	cur_flag = (*b)->num_clust;
	while (move_count < push_goal)
	{
		if ((*b)->sort_ind > med)
		{
			move_count++;
			push_a(a, b, 1);
		}
		else
			rotate_b(b, 1);
	}
}

int	mediana_finder_b(t_stack **a, t_stack **b)
{
	int	current_flag;
	int	mediana;
	int	min;
	int	max;

	current_flag = (*b)->num_clust;
	min = clust_min(*b);
	max = clust_max(*b);
	mediana = (clust_max(*b) - min) / 2 + min;
	mediana_move_b(a, b, mediana);
	return (current_flag);
}
