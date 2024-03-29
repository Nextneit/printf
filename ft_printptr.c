/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:58:19 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/07/26 10:02:06 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long n)
{
	int	count;

	count = 0;
	count += ft_printstr ("0x");
	if (count == -1)
		return (-1);
	count += ft_printhexa (n, 'x');
	if (count == -1)
		return (-1);
	return (count);
}
