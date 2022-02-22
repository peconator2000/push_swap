/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:22:03 by vellie            #+#    #+#             */
/*   Updated: 2021/09/18 17:10:51 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	not_valid(int *mas, int size)
{
	int	mid;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		mid = mas[i];
		while (j < size)
		{
			if (i != j && mas[j] == mid)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	one_case(int *size, char **argv, int **mas)
{
	*size = 0;
	(*mas) = zapolnenie(size, argv);
	if (!mas || not_valid(*mas, *size))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

void	many_arg_case(int *size, char **argv, int **mas, int argc)
{
	(*size) = argc - 1;
	(argv)++;
	(*mas) = many_nums(argv, *size);
	if (!(*mas) || not_valid(*mas, *size))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
}

int	is_minus_clust(t_stack *a, t_stack *b)
{
	if (ft_lstsize(b) != 0)
		return (0);
	while (a)
	{
		if (a->num_clust != -1)
			return (0);
		a = a->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*mas;
	int		size;
	int		i;

	a = 0;
	b = 0;
	i = -1;
	if (argc == 2)
		one_case(&size, argv, &mas);
	else if (argc > 2)
		many_arg_case(&size, argv, &mas, argc);
	else
		exit(0);
	i = size;
	while (--i >= 0)
		ft_lstadd_front(&a, ft_lstnew(mas[i]));
	q_sort(mas, 0, size - 1, size - 1);
	sort_station(mas, a, size);
	free(mas);
	algo(&a, &b, size);
	ft_lstclear(&a);
	ft_lstclear(&b);
}
