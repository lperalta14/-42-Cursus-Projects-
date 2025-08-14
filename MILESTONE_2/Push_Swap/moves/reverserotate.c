/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-13 11:01:31 by lperalta          #+#    #+#             */
/*   Updated: 2025-08-13 11:01:31 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverse_rotate(t_node **stack)
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
void	ft_reverse_rotatea(t_node **stack_a)
{
	ft_reverse_rotate(stack_a);
	write(1, "rra", 3);
}
void	ft_reverse_rotateb(t_node **stack_b)
{
	ft_reverse_rotate(stack_b);
	write(1, "rrb", 3);
}
void	ft_reverse_rotateab(t_node **stack_a, t_node **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	write(1, "rrr", 3);
}