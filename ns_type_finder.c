/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_type_finder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:33:49 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:34:09 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	the_last_elem(t_stack *head)
{
	if (!head)
		return (-1);
	while (head->next)
		head = head->next;
	return (head->sort_ind);
}

int	what_type_3(t_stack *head)
{
	int	a;
	int	b;
	int	c;

	if (ft_lstsize(head) < 3)
		return (-2);
	a = head->sort_ind;
	b = head->next->sort_ind;
	c = head->next->next->sort_ind;
	if (a < b && b < c)
		return (0);
	else if (a < c && c < b)
		return (1);
	else if (b < a && a < c)
		return (2);
	else if (c < a && a < b)
		return (3);
	else if (b < c && c < a)
		return (4);
	if (c < b && b < a)
		return (5);
	return (-1);
}

void	type_direction(t_stack **a, t_stack **b)
{
	int	ta;
	int	tb;

	ta = what_type_3(*a);
	tb = what_type_3(*b);
	if (ta == 0 || tb == 0)
		type_dir0(a, b, ta, tb);
	else if (ta == 1 || tb == 1)
		type_dir1(a, b, ta, tb);
	else if (ta == 2 || tb == 2)
		type_dir2(a, b, ta, tb);
	else if (ta == 3 || tb == 3)
		type_dir3(a, b, ta, tb);
	else if (ta == 4 || tb == 4)
		type_dir4(a, b, ta, tb);
	else if (ta == 5 || tb == 5)
		type_dir5(a, b, ta, tb);
}
