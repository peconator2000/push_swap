/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_librarian.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:46:43 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:47:33 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	oper_dir_stand(t_stack **a, t_stack **b, char stack, char *move)
{
	if (stack == 'a')
	{
		if (ft_strcmp(move, "p"))
			push_a(a, b, 1);
		else if (ft_strcmp(move, "s"))
			swap_a(a, 1);
		else if (ft_strcmp(move, "r"))
			rotate_a(a, 1);
		else if (ft_strcmp(move, "rr"))
			rev_rotate_a(a, 1);
		return ;
	}
	if (ft_strcmp(move, "p"))
		push_b(a, b, 1);
	else if (ft_strcmp(move, "s"))
		swap_b(b, 1);
	else if (ft_strcmp(move, "r"))
		rotate_b(b, 1);
	else if (ft_strcmp(move, "rr"))
		rev_rotate_b(b, 1);
}

static void	oper_dir_dual(t_stack **a, t_stack **b, char *move)
{
	if (ft_strcmp(move, "s"))
		swap_all(a, b, 1);
	else if (ft_strcmp(move, "r"))
		rotate_all(a, b, 1);
	else if (ft_strcmp(move, "rr"))
		rev_rotate_all(a, b, 1);
}

void	move_list_oper(t_stack **a, t_stack **b, t_oper *oper)
{
	while (oper)
	{
		if ((oper)->stack == 'a' || (oper)->stack == 'b')
			oper_dir_stand(a, b, (oper)->stack, (oper)->oper);
		else
			oper_dir_dual(a, b, (oper)->oper);
		(oper) = (oper)->next;
	}
}
