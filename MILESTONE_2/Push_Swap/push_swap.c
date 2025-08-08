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
	t_node	*arg_list;

	if(argc < 2)
		return(0);
	ft_checkervalids(argv);
	arg_list = ft_get_arguments(argc, argv);
	if (!arg_list)
		ft_error(NULL, NULL);
	check_duplicates(arg_list);
	//pushswap(arg_list);
	ft_free_stack(&arg_list);
	return (0);
}
