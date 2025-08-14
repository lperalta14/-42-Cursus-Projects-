/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:28:46 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/29 19:30:40 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexstack(t_stack *stack_a)
{
	t_node	*ptr;
	t_node	*min_node;
	int		index;
	int		max_index;

	index = 0;
	max_index = stack_a->size;

	while (index < max_index)
	{
		ptr = *(stack_a->stack);
		min_node = NULL;
		while (ptr)
		{
			if (ptr->index == -1 && (!min_node || ptr->value < min_node->value))
				min_node = ptr;
			ptr = ptr->next;
		}
		if (min_node)
			min_node->index = index++;
	}
}
int	ft_stacksize(t_node *stack)
{
	int	size = 0;

	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	ft_pushswap(t_stack *stack_a)
{
	t_stack	*stack_b;

	stack_b = malloc(sizeof(t_stack));
	if(!stack_b)
		return(0);
	stack_b->stack = ft_calloc(sizeof(t_node *), 1);
	if (!stack_b->stack)
		ft_error(NULL, stack_b);
	stack_a->size = ft_stack_size(*(stack_a->stack));
	ft_indexstack(stack_a);
	ft_pushex3(stack_a, stack_b);
	sort_three(stack_a);
	while (*(stack_b->stack))
	{
		ft_asignarposcion(stack_a, stack_b);
		ponereltargetposition(stack_a, stack_b);
		calculodecostos(stack_a, stack_b);
		moverelmasbarato(stack_a, stack_b);
	}
	rotaciodea(stack_a);
	ft_free_stack(stack_b);
}
