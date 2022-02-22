/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_direction33_p2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:34:49 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 18:36:07 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type_dir00(t_stack **a, t_stack **b, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (tb == 0)
		return ;
	else if (tb == 1)
		newop = synergy1('b');
	else if (tb == 2)
		newop = synergy2('b');
	else if (tb == 3)
		newop = synergy3('b');
	else if (tb == 4)
		newop = synergy4('b');
	else if (tb == 5)
		newop = synergy5('b');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

static void	type_dir11(t_stack **a, t_stack **b, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (tb == 1)
		newop = synergy11();
	else if (tb == 2)
		newop = synergy12('a');
	else if (tb == 3)
		newop = synergy13('b');
	else if (tb == 4)
		newop = synergy14('b');
	else if (tb == 5)
		newop = synergy15('b');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

void	type_dir0(t_stack **a, t_stack **b, int ta, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 0)
	{
		type_dir00(a, b, tb);
		return ;
	}
	if (ta == 1)
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
}

void	type_dir1(t_stack **a, t_stack **b, int ta, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 1)
	{
		type_dir11(a, b, tb);
		return ;
	}
	if (ta == 2)
		newop = synergy12('b');
	else if (ta == 3)
		newop = synergy13('a');
	else if (ta == 4)
		newop = synergy14('a');
	else if (ta == 5)
		newop = synergy15('a');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}
