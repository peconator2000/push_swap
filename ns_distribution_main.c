/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_distribution_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:39:01 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:39:15 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lonely_direction(t_stack **a, t_stack **b, int ta, char stack)
{
	t_oper	*newop;

	newop = 0;
	if (ta == 0)
		return ;
	else if (ta == 1)
		newop = lonely1(stack);
	else if (ta == 2)
		newop = lonely2(stack);
	else if (ta == 3)
		newop = lonely3(stack);
	else if (ta == 4)
		newop = lonely4(stack);
	else if (ta == 5)
		newop = lonely5(stack);
	move_list_oper(a, b, newop);
	if (newop)
		free(newop);
}

void	distribution(t_stack **a, t_stack **b, int *next)
{
	int	how;

	new_reboot(*a);
	if (is_all_rigth(*a, *b))
		return ;
	main_traffic(a, b, next);
	how = how_in_clust(*a);
	if (how == 2)
		dis2(a, b, next);
	else if (how == 3)
		dis3(a, b, next);
	else if (how == 4)
		dis4(a, b, next);
	else if (how == 5)
		dis5(a, b, next);
	else if (how == 6)
		dis6(a, b, next);
}

void	distribution_b(t_stack **a, t_stack **b, int *next)
{
	int	how;

	new_reboot(*b);
	if (is_all_rigth(*a, *b))
		return ;
	main_traffic(a, b, next);
	how = how_in_clust(*b);
	if (how == 2)
		dis2b(a, b, next);
	else if (how == 3)
		dis3b(a, b, next);
	else if (how == 4)
		dis4b(a, b, next);
	else if (how == 5)
		dis5b(a, b, next);
	else if (how == 6)
		dis6b(a, b, next);
}
