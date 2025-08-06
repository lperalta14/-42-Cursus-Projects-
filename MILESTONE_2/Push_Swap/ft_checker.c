/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:08:39 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/29 18:39:48 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib/libft.h"

int	ft_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_checkervalids(char **args)
{
	int		i;
	int		j;

	i = 1;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]) && !ft_sign(args[i][j])
					&& !ft_isspace(args[i][j]))
			{
				write(1, "no\n", 3);
				return(1);				
			}
			j++;
		}
		i++;
	}
	return(0);
}


int main(int argc, char **argv)
{
	int i=1;
	while(i <= argc)
	{
		if(ft_checkervalids(&argv[i]))
			return(1);
		i++;
	}
	return(0);
}