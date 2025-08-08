
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

void	ft_checkervalids(char **args)
{
	int		i;
	int		j;

	i = 1;
	while (args[i])
	{
		if(ft_strlen(args[i] < 1))
			ft_error(NULL, NULL);
		j = 0;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]) && !ft_sign(args[i][j])
					&& !ft_isspace(args[i][j]))
					ft_error(NULL, NULL);
			j++;
		}
		i++;
	}
}
int	ft_valid_digit(char *str)
{
	int i;

	i = 0;
	if(!str || *str)
		return (0);
	if(ft_sign(str[i]))
		i++;
	while(str[i])
	{
		if(!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
//int	ft_dups()