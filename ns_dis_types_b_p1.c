/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_dis_types_b_p1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:36:06 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:36:41 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dis2b(t_stack **a, t_stack **b, int *next)
{
	if ((*b)->sort_ind < (*b)->next->sort_ind)
	{
		ft_traffic_cop(a, b, next);
		main_traffic(a, b, next);
		return ;
	}
	else
		swap_b(b, 1);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}

void	dis3b(t_stack **a, t_stack **b, int *next)
{
	int	ta;

	ta = what_type_3(*a);
	lonely_direction(a, b, ta, 'a');
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}

void	dis4b(t_stack **a, t_stack **b, int *next)
{
	int	na;
	int	nb;

	push_a(a, b, 1);
	push_a(a, b, 1);
	nb = 1;
	na = 1;
	if ((*b)->sort_ind < (*b)->next->sort_ind)
		nb = 0;
	if ((*a)->sort_ind < (*a)->next->sort_ind)
		na = 0;
	if (na && nb)
		swap_all(a, b, 1);
	else if (na)
		swap_a(a, 1);
	else if (nb)
		swap_b(b, 1);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}

void	dis6b(t_stack **a, t_stack **b, int *next)
{
	push_a(a, b, 1);
	push_a(a, b, 1);
	push_a(a, b, 1);
	type_direction(a, b);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}

void	dis5b(t_stack **a, t_stack **b, int *next)
{
	int	type;

	push_a(a, b, 1);
	push_a(a, b, 1);
	type = what_type_3(*b);
	if ((*a)->sort_ind < (*a)->next->sort_ind)
		dis5_lonely(a, b, 'b', type);
	else
		dis5_lonely_s(a, b, type);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}
