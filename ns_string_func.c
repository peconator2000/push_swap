/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_string_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:27:42 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:44:51 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*res;
	int		i;

	i = -1;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(*res));
		res[0] = '\0';
		return (res);
	}
	else if (ft_strlen(s) > (len + start))
		res = malloc((len + 1) * sizeof(*res));
	else
	{
		res = malloc((ft_strlen(s) - start + 2) * sizeof(*res));
		len = ft_strlen(s) - start;
	}
	if (!res)
		return (0);
	while (++i < (int)len)
		res[i] = s[start + i];
	res[i] = '\0';
	return (res);
}

static int	result(char *str)
{
	int			res;
	long long	max;

	res = 0;
	max = 0;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - 48;
		max = max * 10 + *str - 48;
		str++;
		if ((*str >= 48 && *str <= 57) && (max * 10 + *str) < 0)
			return (-1);
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	znak;
	int	res;

	znak = 1;
	while (*str == ' ')
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			znak *= -1;
		str++;
	}
	res = result(str);
	if (res == -1)
	{
		if (znak == 1)
			return (-1);
		else
			return (0);
	}
	return (res * znak);
}
