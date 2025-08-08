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
#include "my_lib/libft.h"

int	main(int argc, char **argv)
{
	t_node	**arg_list;

	arg_list = ft_get_arguments(argc, argv);
	if (arg_list == NULL)
	{
		//print error en los argumentos
		return (1);
	}
	//pushswap(arg_list);
	ft_free_stack(arg_list);
	return (0);
}
