/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ns_lib_synergy3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vellie <vellie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:46:15 by vellie            #+#    #+#             */
/*   Updated: 2021/09/15 14:29:55 by vellie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_oper	*synergy33(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	return (head);
}

t_oper	*synergy34(char stack1, char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack1, "s"));
	return (head);
}

t_oper	*synergy35(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	return (head);
}

t_oper	*synergy44(void)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	return (head);
}

t_oper	*synergy45(char stack2)
{
	t_oper	*head;

	head = 0;
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "r"));
	ft_lstadd_back_oper(&head, new_oper('s', "s"));
	ft_lstadd_back_oper(&head, new_oper('r', "rr"));
	ft_lstadd_back_oper(&head, new_oper(stack2, "s"));
	return (head);
}
