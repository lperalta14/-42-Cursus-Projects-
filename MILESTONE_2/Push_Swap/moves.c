/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-07 13:11:12 by lperalta          #+#    #+#             */
/*   Updated: 2025-08-07 13:11:12 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib/libft.h"
#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node *first;
	t_node *second;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	push(t_node **dst, t_node **src)
{
	t_node *temp;

	if (!src || !*src)
		return;
	temp = *src;
	*src = temp->next;
	temp->next = *dst;
	*dst = temp;
}

void	rotate(t_node **stack)
{
	t_node *first;
	t_node *last;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = ft_lstlast_node(*stack);
	last->next = first;
}

void	reverse_rotate(t_node **stack)
{
	t_node *prev;
	t_node *last;

	if (!stack || !*stack || !(*stack)->next)
		return;
	prev = NULL;
	last = *stack;

	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}