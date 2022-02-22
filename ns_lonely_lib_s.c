/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lonely_lib_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:47:58 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:43:49 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*lonely1s(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "r"));
	return (head);
}

t_oper	*lonely2s(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	return (head);
}

t_oper	*lonely3s(char stack1, char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack1, "s"));
	return (head);
}

t_oper	*lonely4s(char stack1, char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "r"));
	ft_lstadd_back_oper(&head, new_oper(stack1, "s"));
	return (head);
}

t_oper	*lonely5s(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}
