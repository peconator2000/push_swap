/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lib_synergy_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:42:08 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:32:35 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*synergy1s(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}

t_oper	*synergy2s(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	return (head);
}

t_oper	*synergy3s(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	return (head);
}

t_oper	*synergy4s(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}

t_oper	*synergy5s(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	return (head);
}
