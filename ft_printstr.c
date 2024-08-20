/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:49:23 by ncruz-ga          #+#    #+#             */
/*   Updated: 2024/08/20 11:57:23 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str)
	{
		j += ft_printstr("(null)");
		return (j);
	}
	while (str[i] != '\0')
	{
		j += ft_putchar(str[i]);
		if (j == -1)
			return (-1);
		i++;
	}
	return (j);
}
