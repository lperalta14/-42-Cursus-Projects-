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

t_node	**ft_get_arguments(int argc, char **argv)
{
	int i;
	int	j;
	char **split;
	long num;

	i = 1;
	while(i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			exit_error();
		j=(0);
		while(split[j])
		{
			if(!ft_valid_digit(split[j]))
				ft_error(split, &stack);
			num = ft_atol(split[j]);
			if(num > INT_MAX || num < INT_MIN)
				ft_error(split, &stack);
		}
		ft_lstadd_back(&stack, ft_lstnew((int)num));
	}
	free_split()
}
