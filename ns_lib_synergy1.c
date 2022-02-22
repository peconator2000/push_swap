/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lib_synergy1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:43:40 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:41:48 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*synergy11(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	return (head);
}

t_oper	*synergy12(char stack1)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack1, "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack1, "rr"));
	return (head);
}

t_oper	*synergy13(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	return (head);
}

t_oper	*synergy14(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	return (head);
}

t_oper	*synergy15(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	return (head);
}
