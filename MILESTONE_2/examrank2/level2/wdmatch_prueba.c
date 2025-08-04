/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch_prueba.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:31:14 by lperalta          #+#    #+#             */
/*   Updated: 2025/08/01 10:40:02 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char *s)
{
	while(*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	wdmatch(char* s1, char* s2)
{
	while(*s1 & *s2)
	{
		if(*s1 == *s2)
			s1++;
		s2++;
	}
	return(!*s1);
}


int main(int argc, char **argv)
{
	if(argc == 3)
	{
		if(wdmatch(argv[1], argv[2]))
			ft_putchar(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}
