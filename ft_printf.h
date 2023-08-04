/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:32:06 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/07/31 11:42:41 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printstr(char *str);
int	ft_printdec(long long int n);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printptr(unsigned long long n);
int	ft_printunsigned(unsigned long long int n);
int	ft_printf(char const *content, ...);

#endif