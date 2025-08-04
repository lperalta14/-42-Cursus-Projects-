/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swao.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:28:46 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/29 19:30:40 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	main(int argc, char **argv)
{
 //argv[argc] = NULL;

	if(argc > 1)
	{
		if(ft_checkerarguments(argv))
		{ 	checker simbols, dulicados)
			ft_error(si memory free, mensaje error);
			return(1);
		}
		create list(spli, atoi e ints);
		ordenar;
	}
	return(0);
}*/

int	main(int argc, char **argv)
{
	node	**arg_list;

	arg_list = ft_get_arguments(argc, argv);
	if (arg_list == NULL)
	{
		//print error en los argumentos
		return (1);
	}
	pushswap(arg_list);
	return (0);
}
