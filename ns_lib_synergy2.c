/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lib_synergy2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:44:17 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:26:51 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*synergy22(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	return (head);
}

t_oper	*synergy23(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	return (head);
}

t_oper	*synergy24(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "rr"));
	return (head);
}

t_oper	*synergy25(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	return (head);
}

t_oper	*synergy55(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	return (head);
}
