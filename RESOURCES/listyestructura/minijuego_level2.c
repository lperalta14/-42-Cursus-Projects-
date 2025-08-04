/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minijuego_level2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:10:03 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/22 17:39:22 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "minijuego.h"
t_node *create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}
int main(int argc, char **argv)
{
	if (argc < 2)
		return(0);
	int i = 1;
	int num = 0;

	while(argc <= i)
	{
		num = atoi(argv[i]);
		t_node	*node = create_node(num);
		if(node)
			printf("node value: %d\n", node->value);
		free(node);
		i++;
	}
	return(0);
}
