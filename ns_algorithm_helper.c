/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_algorithm_helper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:23:08 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:23:35 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_reboot(t_stack *head)
{
	int	cur;

	cur = head->num_clust;
	if (cur == -1)
		return ;
	while (head && head->num_clust == cur)
	{
		head->num_clust++;
		head = head->next;
	}
}

int	is_lonely_3(t_stack *a, t_stack *b)
{
	if (ft_lstsize(b) != 0)
		return (0);
	if (ft_lstsize(a) != 3)
		return (0);
	return (1);
}

int	is_all_rigth(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->sort_ind != i)
			return (0);
		a = a->next;
		i++;
	}
	if (ft_lstsize(b) != 0)
		return (0);
	return (1);
}
