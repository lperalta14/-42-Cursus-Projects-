/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits_prueba.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:26:50 by lperalta          #+#    #+#             */
/*   Updated: 2025/08/01 10:30:41 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result = 0x80;
	int i = 8;
	while(i--)
	{
		result = (result << 1 | (octect & 1))
		octect >>= 1;
	}
	return(result);
}
