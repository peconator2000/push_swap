/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_dis_types_part1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:37:27 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:37:52 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dis2(t_stack **a, t_stack **b, int *next)
{
	if ((*a)->sort_ind < (*a)->next->sort_ind)
	{
		main_traffic(a, b, next);
		return ;
	}
	swap_a(a, 1);
	main_traffic(a, b, next);
}

void	dis3(t_stack **a, t_stack **b, int *next)
{
	int		ta;
	t_oper	*newop;

	ta = what_type_3(*a);
	newop = 0;
	if (is_lonely_3(*a, *b))
		lonely_direction(a, b, ta, 'a');
	else if (ta == 0)
		return ;
	else if (ta == 1)
		newop = synergy1('a');
	else if (ta == 2)
		newop = synergy2('a');
	else if (ta == 3)
		newop = synergy3('a');
	else if (ta == 4)
		newop = synergy4('a');
	else if (ta == 5)
		newop = synergy5('a');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
	main_traffic(a, b, next);
}

void	dis4(t_stack **a, t_stack **b, int *next)
{
	int	na;
	int	nb;

	push_b(a, b, 1);
	push_b(a, b, 1);
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

void	dis6(t_stack **a, t_stack **b, int *next)
{
	push_b(a, b, 1);
	push_b(a, b, 1);
	push_b(a, b, 1);
	type_direction(a, b);
	ft_traffic_cop(a, b, next);
	main_traffic(a, b, next);
}
