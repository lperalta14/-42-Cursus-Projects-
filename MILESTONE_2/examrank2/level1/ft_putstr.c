/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:35:20 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/08 18:47:54 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
	write(1, "\n", 1);
	return(0);
}
