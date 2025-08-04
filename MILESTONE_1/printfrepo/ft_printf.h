/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:04:17 by lperalta          #+#    #+#             */
/*   Updated: 2025/05/26 11:09:25 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_specifiers(char type, va_list args);
int	ft_slen(char *s);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_unsigput(unsigned int n);
int	ft_puthex(unsigned long n, char x);
int	ft_putptr(unsigned long n);
int	ft_printf(const char *nbr, ...);

#endif
