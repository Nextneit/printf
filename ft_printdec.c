/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:01:00 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/20 11:56:51 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdec(long long int n)
{
	int		result;
	char	c;

	result = 0;
	if (n < 0)
	{
		result += ft_putchar('-');
		if (result == -1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		result += ft_printdec(n / 10);
		if (result == -1)
			return (-1);
	}
	c = n % 10 + '0';
	result += ft_putchar(c);
	if (result == -1)
		return (-1);
	return (result);
}
