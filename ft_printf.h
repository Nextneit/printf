/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:32:06 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/05/24 12:11:17 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printdec(int n);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printptr(unsigned long long n);
int	ft_printunsigned(unsigned int unsig);
int	ft_printf(char const *content, ...);

#endif