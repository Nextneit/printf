/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:41:07 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/05/24 12:02:25 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_printchar ('-');
		ft_printchar ('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_printchar ('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_printchar (n + '0');
	else
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
}

static int	ft_dcount(long int nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		i++;
		nb /= 10;
	}
	return (i + 1);
}

int	ft_printdec(int n)
{
	long int	nb;

	nb = 0;
	ft_putnbr(n);
	if (n >= 0)
		return (ft_dcount(n));
	nb = (long int)n * (-1);
	return (ft_dcount(nb) + 1);
}
