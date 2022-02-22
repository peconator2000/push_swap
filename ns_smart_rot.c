/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_smart_rot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:26:26 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 16:40:35 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish_move(int rev, int rot, t_stack **a)
{
	if (rev < rot)
		while (rev--)
			rev_rotate_a(a, 1);
	else
		while (rot--)
			rotate_a(a, 1);
}

void	finish_step(t_stack **a, int *next, int size)
{
	int		rot;
	int		rev;
	int		curr;
	t_stack	*mid;

	rev = 0;
	rot = 0;
	if (*next == 0)
		curr = size - 1;
	else
		curr = *next - 1;
	mid = *a;
	while ((mid)->sort_ind != curr)
	{
		rot++;
		(mid) = (mid)->next;
	}
	rev = ft_lstsize(*a) - rot - 1;
	rot++;
	finish_move(rev, rot, a);
}
