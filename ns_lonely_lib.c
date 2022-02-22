/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lonely_lib.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:49:02 by vellie            #+#    #+#             */
/*   Updated: 2021/09/10 18:49:02 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*lonely1(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	return (head);
}

t_oper	*lonely2(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	return (head);
}

t_oper	*lonely3(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}

t_oper	*lonely4(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "r"));
	return (head);
}

t_oper	*lonely5(char stack)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack, "s"));
	ft_lstadd_back_oper(&head, new_oper(stack, "rr"));
	return (head);
}
