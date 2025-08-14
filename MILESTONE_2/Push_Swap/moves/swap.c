/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-13 10:22:19 by lperalta          #+#    #+#             */
/*   Updated: 2025-08-13 10:22:19 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_node **stack)
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
void	ft_swapa(t_node **stack_a)
{
	ft_swap(stack_a);
	write(1, "sa", 2);
}
void	ft_swapb(t_node **stack_b)
{
	ft_swap(stack_b);
	write(1, "sb", 2);
}
void	ft_swapab(t_node **stack_a, t_node **stack_b)
{
	ft_swapa(stack_a);
	ft_swapb(stack_b);
	write(1, "ss", 2);
}