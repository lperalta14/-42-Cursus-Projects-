/* ************************************************************************** */
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

int	ft_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

void	ft_checker(char **args)
{
	int		i;
	int		j;

	i = 1;
	while (args[i][j])
	{
		j = 0;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]) || !ft_sign(args[i][j])
					|| !ft_isspace(args[i][j]))
				exit;
			j++;
		}
		i++;
	}
}


