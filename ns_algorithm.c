/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:25:05 by vellie            #+#    #+#             */
/*   Updated: 2021/09/18 17:08:49 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cluster_sort_a(t_stack **a, t_stack **b, int *next, int size)
{
	new_reboot(*a);
	mediana_finder_a(a, b, next);
	finish_step(a, next, size);
}

void	cluster_sort_b(t_stack **a, t_stack **b)
{
	if (!is_all_rigth(*a, *b) && !is_minus_clust(*a, *b))
	{
		new_reboot(*b);
		mediana_finder_b(a, b);
	}
}

void	way_a(t_stack **a, t_stack **b, int *next, int real_size)
{
	int	in_a;
	int	in_b;

	in_a = how_in_clust(*a);
	in_b = how_in_clust(*b);
	if (in_a < 13 && in_a > 6 && in_b == 0)
		reminder_a(a, b, next, real_size);
	else if (in_a <= 6)
		distribution(a, b, next);
	else
		cluster_sort_a(a, b, next, real_size);
	main_traffic(a, b, next);
}

void	way_b(t_stack **a, t_stack **b, int *next)
{
	int	in_b;

	in_b = ft_lstsize(*b);
	while (in_b)
	{
		in_b = ft_lstsize(*b);
		if (in_b != 0 && in_b < 13)
		{
			reminder_b(a, b);
			distribution_b(a, b, next);
		}
		else if (in_b != 0)
			cluster_sort_b(a, b);
		in_b = ft_lstsize(*b);
	}
}

void	algo(t_stack **a, t_stack **b, int real_size)
{
	int	next;

	next = 0;
	while (!is_all_rigth(*a, *b) && !is_minus_clust(*a, *b))
	{		
		way_a(a, b, &next, real_size);
		way_b(a, b, &next);
	}
}
