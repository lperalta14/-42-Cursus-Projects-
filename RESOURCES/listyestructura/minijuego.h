/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minijuego.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:38:47 by lperalta          #+#    #+#             */
/*   Updated: 2025/07/22 17:36:53 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Mini-juego:
 Declara una estructura t_book que contenga:
	·char *title
	·int pages
 Crea una instancia de t_book y rellénala con tus datos favoritos.*/

#ifndef BOOK_H
# define BOOK_H

typedef struct s_book {
	char	*title;
	int		pages;
} t_book;

typedef struct s_node{
	int value;
	struct s_node *next;
} t_node;

t_node *create_node(int value);

#endif
