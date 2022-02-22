/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_direction33_p1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:28:08 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:30:29 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	type_dir22(t_oper **newop, int tb)
{
	if (tb == 2)
		(*newop) = synergy22();
	else if (tb == 3)
		(*newop) = synergy23('b');
	else if (tb == 4)
		(*newop) = synergy24('b');
	else if (tb == 5)
		(*newop) = synergy25('b');
}

void	type_dir2(t_stack **a, t_stack **b, int ta, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 2)
		type_dir22(&newop, tb);
	else
	{
		if (ta == 3)
			newop = synergy23('a');
		else if (ta == 4)
			newop = synergy24('a');
		else if (ta == 5)
			newop = synergy25('a');
	}
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

void	type_dir3(t_stack **a, t_stack **b, int ta, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 3)
	{
		if (tb == 3)
			newop = synergy33();
		else if (tb == 4)
			newop = synergy34('a', 'b');
		else if (tb == 5)
			newop = synergy35('b');
	}
	else
	{
		if (ta == 4)
			newop = synergy34('b', 'a');
		else if (ta == 5)
			newop = synergy35('a');
	}
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

void	type_dir4(t_stack **a, t_stack **b, int ta, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 4)
	{
		if (tb == 4)
			newop = synergy44();
		else if (tb == 5)
			newop = synergy45('b');
		move_list_oper(a, b, newop);
		if (newop)
			ft_lstclear_oper(&newop);
		return ;
	}
	if (ta == 5)
		newop = synergy45('a');
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}

void	type_dir5(t_stack **a, t_stack **b, int ta, int tb)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 5)
	{
		if (tb == 5)
			newop = synergy55();
		move_list_oper(a, b, newop);
		if (newop)
			ft_lstclear_oper(&newop);
		return ;
	}
	newop = synergy55();
	move_list_oper(a, b, newop);
	if (newop)
		ft_lstclear_oper(&newop);
}
