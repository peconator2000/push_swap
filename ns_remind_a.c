/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_remind_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:15:39 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:27:37 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	remind_finder_a(t_stack *head, int med)
{
	while (head)
	{
		if ((head)->sort_ind < med && (head)->num_clust != -1)
			head->is_remind = 1;
		else
			head->is_remind = 0;
		head = head->next;
	}
}

int	rotate_remind(t_stack *head)
{
	int	rot;
	int	size;
	int	closest;

	rot = 0;
	size = ft_lstsize(head);
	closest = closest_remind(head, size);
	while (head)
	{
		if (head->sort_ind == closest)
			break ;
		rot++;
		head = head->next;
	}
	if (rot < size - rot)
		return (rot);
	else
		return ((size - rot) * (-1));
}

int	closest_remind(t_stack *head, int size)
{
	int	first;
	int	first_flag;
	int	last;

	first_flag = 1;
	while (head)
	{
		if (first_flag && head->is_remind)
		{
			first_flag = 0;
			first = head->sort_ind;
		}
		if (head->is_remind)
			last = head->sort_ind;
		head = head->next;
	}
	if (first < (size - last))
		return (first);
	else
		return (last);
}

static void	reminder_a_ut(t_stack **a, t_stack **b, int *next)
{
	main_traffic(a, b, next);
	rotate_a(a, 1);
}

void	reminder_a(t_stack **a, t_stack **b, int *next, int real_size)
{
	int	med;
	int	y;

	y = 0;
	new_reboot(*a);
	med = clust_min(*a) + 6;
	remind_finder_a(*a, med);
	while (y < 6)
	{
		if ((*a)->is_remind)
		{
			(*a)->is_remind = 0;
			(*a)->num_clust++;
			push_b(a, b, 1);
			y++;
			remind_finder_a(*a, med);
		}
		else
			reminder_a_ut(a, b, next);
	}
	finish_step(a, next, real_size);
}
