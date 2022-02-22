/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_preprocessing_data.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:09:47 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 19:10:47 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	q_sort_lr(int *mas, int base, int *l, int *r)
{
	while ((mas)[(*l)] < base)
		(*l)++;
	while ((mas)[(*r)] > base)
		(*r)--;
}

static void	sort_ind(t_stack *head, int elem, int ind)
{
	while (head)
	{
		if (head->data == elem)
		{
			head->sort_ind = ind;
			break ;
		}
		head = head->next;
	}
}

void	sort_station(int mas[], t_stack *head, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		sort_ind(head, mas[i], i);
}

static void	initialization(int r_start, int l_start, int *r, int *l)
{
	(*r) = r_start;
	(*l) = l_start;
}

void	q_sort(int *mas, int l_start, int r_start, int size)
{
	int	mid;
	int	base;
	int	r;
	int	l;

	base = mas[(l_start + r_start) / 2];
	initialization(r_start, l_start, &r, &l);
	while (l <= r)
	{
		q_sort_lr(mas, base, &l, &r);
		if (l <= r)
		{
			mid = (mas)[l];
			(mas)[l] = (mas)[r];
			(mas)[r] = mid;
			l++;
			r--;
		}
	}
	if (r > l_start)
		q_sort(mas, l_start, r, size);
	if (l < r_start)
		q_sort(mas, l, r_start, size);
}
