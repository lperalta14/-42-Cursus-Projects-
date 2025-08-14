/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-13 10:57:39 by lperalta          #+#    #+#             */
/*   Updated: 2025-08-13 10:57:39 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_node **stack)
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
void	ft_rotatea(t_node **stack_a)
{
	ft_rotate(stack_a);
	write(1, "ra", 2);
}
void	ft_rotateb(t_node **stack_b)
{
	ft_rotate(stack_b);
	write(1, "rb", 2);
}
void	ft_rotateab(t_node **stack_a, t_node **stack_b)
{
	ft_rotatea(stack_a);
	ft_rotateb(stack_b);
	write(1, "rr", 2);
}