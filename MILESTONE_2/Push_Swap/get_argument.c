/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-07 17:26:41 by lperalta          #+#    #+#             */
/*   Updated: 2025-08-07 17:26:41 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "my_lib/libft.h"

void ft_getnode(t_node **stack, char **split)
{
	int		j;
	int		num;
	t_node *new;

	j = 0;
	while(split[j])
	{
		if(!ft_valid_digit(split[j]))
			ft_error(split, stack);
		num = ft_atolints(split[j]);
		if (num > INT_MAX || num < INT_MIN)
			ft_error(split, stack);
	}
	new = ft_lstnew(&num);
	if (!new)
		ft_error(split, stack);
	ft_lstadd_back(stack, new);
	ft_free_split(split);
}

t_node	**ft_get_arguments(int argc, char **argv)
{
	int i;
	char **split;
	t_node	**stack;

	stack = NULL, i = 1;
	while(i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			ft_error(split, stack);
		ft_getnode(stack, split);
	}
	return (stack);
}

