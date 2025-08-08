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

// swap: intercambia los dos primeros elementos de la lista
void	swap(t_list **stack)
{
	t_list *first;
	t_list *second;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	second = first->next;

	first->next = second->next;
	second->next = first;
	*stack = second;
}

// push: mueve el primer elemento de src a dst
void	push(t_list **dst, t_list **src)
{
	t_list *temp;

	if (!src || !*src)
		return;
	temp = *src;
	*src = temp->next;
	temp->next = *dst;
	*dst = temp;
}

// rotate: mueve el primer nodo al final
void	rotate(t_list **stack)
{
	t_list *first;
	t_list *last;

	if (!stack || !*stack || !(*stack)->next)
		return;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = ft_lstlast(*stack);
	last->next = first;
}

// reverse rotate: mueve el último nodo al inicio
void	reverse_rotate(t_list **stack)
{
	t_list *prev;
	t_list *last;

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