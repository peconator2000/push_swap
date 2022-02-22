/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_dis_types_part2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:38:23 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 16:11:51 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dis5_lonely(t_stack **a, t_stack **b, char stack, int type)
{
	t_oper	*newop;

	newop = 0;
	if (type == 0)
		return ;
	else if (type == 1)
		newop = lonely1(stack);
	else if (type == 2)
		newop = lonely2(stack);
	else if (type == 3)
		newop = lonely3(stack);
	else if (type == 4)
		newop = lonely4(stack);
	else if (type == 5)
		newop = lonely5(stack);
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

void	dis5_lonely_s(t_stack **a, t_stack **b, int type)
{
	t_oper	*newop;

	newop = 0;
	if (type == 0)
		swap_a(a, 1);
	else if (type == 1)
		newop = lonely1s('b');
	else if (type == 2)
		newop = lonely2s();
	else if (type == 3)
		newop = lonely3s('a', 'b');
	else if (type == 4)
		newop = lonely4s('a', 'b');
	else if (type == 5)
		newop = lonely5s('b');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

static void	dis5_lonely_s5(t_stack **a, t_stack **b, int type)
{
	t_oper	*newop;

	newop = 0;
	if (type == 0)
		swap_b(b, 1);
	else if (type == 1)
		newop = lonely1s('a');
	else if (type == 2)
		newop = lonely2s();
	else if (type == 3)
		newop = lonely3s('b', 'a');
	else if (type == 4)
		newop = lonely4s('b', 'a');
	else if (type == 5)
		newop = lonely5s('a');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

static void	only_5el(t_stack **a, t_stack **b, int *next)
{
	int	type;

	push_b(a, b, 1);
	push_b(a, b, 1);
	type = what_type_3(*a);
	if ((*b)->sort_ind < (*b)->next->sort_ind)
		dis5_lonely(a, b, 'a', type);
	else
		dis5_lonely_s5(a, b, type);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}

void	dis5(t_stack **a, t_stack **b, int *next)
{
	int	type;

	if (ft_lstsize(*a) == 5)
	{
		only_5el(a, b, next);
		return ;
	}
	push_b(a, b, 1);
	push_b(a, b, 1);
	push_b(a, b, 1);
	type = what_type_3(*b);
	if ((*a)->sort_ind < (*a)->next->sort_ind)
		dis5_lonely(a, b, 'b', type);
	else
		dis5_lonely_s(a, b, type);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}
