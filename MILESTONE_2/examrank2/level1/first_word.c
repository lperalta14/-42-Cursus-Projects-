/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:21:26 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/08 18:51:47 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escriba un programa que tome una cadena y muestre su primera palabra, seguida 
de una nueva línea.

Una palabra es una sección de cadena delimitada por espacios/tabulaciones o 
por el inicio/final de la cadena (string).

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestre
una nueva línea.*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i=0;
	if (argc == 2)
	{
		while(argv[1][i] < 33)
			i++;
		while(argv[1][i] > 33)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
