/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:57:43 by mel-hach          #+#    #+#             */
/*   Updated: 2024/01/07 22:57:44 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	*len += write(1, &c, 1);
}

void	ft_putstr(const char *str, int *len)
{
	if (str == NULL)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, len);
		str++;
	}
}

void	ft_putnbr(long nbr, int *len)
{
	if (nbr < 0)
	{
		ft_putchar('-', len);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, len);
	ft_putchar(nbr % 10 + 48, len);
}
