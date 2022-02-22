/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lib_synergy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:42:52 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:43:00 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*synergy1(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}

t_oper	*synergy2(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	return (head);
}

t_oper	*synergy3(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	return (head);
}

t_oper	*synergy4(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}

t_oper	*synergy5(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	return (head);
}
