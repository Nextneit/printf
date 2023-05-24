/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:39:31 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/05/23 14:42:55 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int unsig)
{
	int	count;

	count = 0;
	if (unsig >= 10)
		count += ft_printunsigned(unsig / 10);
	ft_putchar (unsig % 10 + '0');
	count++;
	return (count);
}
