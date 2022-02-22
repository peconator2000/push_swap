/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_enter_data_p2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:40:03 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 15:36:55 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*free_func(char **spl, int **res, int num)
{
	char	**mid;

	mid = spl;
	if (!num)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (*spl)
	{
		if (*spl)
			free(*spl);
		spl++;
	}
	if (mid)
		free(mid);
	return (*res);
}

int	check_enter_data(char *spl)
{
	int	i;
	int	size;
	int	flag;

	i = 0;
	flag = 0;
	size = ft_strlen(spl);
	if (!spl)
		return (0);
	if (spl[i] == '-')
		i++;
	while (ft_isdigit(spl[i]) == 1)
	{
		flag = 1;
		i++;
	}
	if (i != size || !flag)
		return (0);
	return (1);
}

int	*zapolnenie(int *argc, char **argv)
{
	int		*res;
	int		i;
	int		k;
	char	**spl;

	i = 0;
	spl = ft_split(argv[1], ' ');
	while (spl[i])
		i++;
	*argc = i;
	res = malloc(sizeof(int) * i);
	k = 0;
	while (check_enter_data(spl[k]) && k < i)
	{
		res[k] = ft_atoi(spl[k]);
		k++;
	}	
	if (k != i)
		return (free_func(spl, &res, 0));
	return (free_func(spl, &res, 1));
}

int	*many_nums(char **argv, int argc)
{
	int	i;
	int	*res;

	i = 0;
	res = malloc(sizeof(int) * (argc - 1));
	while (check_enter_data(argv[i]) && (i < (argc)))
	{
		res[i] = ft_atoi(argv[i]);
		i++;
	}
	if (i != argc)
	{
		if (res)
			free(res);
		return (NULL);
	}
	return (res);
}
