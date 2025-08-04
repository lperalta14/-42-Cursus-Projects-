/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minijuego_level1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:43:18 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/22 15:53:49 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "minijuego.h"

int	main(void)
{	
	int i = 3;
	t_book libritos[i];

	libritos[0].title = "Moby Dick";
	libritos[0].pages = 714;
	libritos[1].title = "Harry Potter";
	libritos[1].pages= 576;
	libritos[2].title= "dick rider";
	libritos[2].pages= 123;
	while(i--)
		printf("Titulo: %s, páginas: %d\n", libritos[i].title, libritos[i].pages);
	return(0);
}

