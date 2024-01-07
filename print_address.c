/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:57:47 by mel-hach          #+#    #+#             */
/*   Updated: 2024/01/07 22:58:32 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_longhex(unsigned long nbr, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
		print_longhex(nbr / 16, len);
	ft_putchar(base[nbr % 16], len);
}

void	print_address(void *add, int *len)
{
	unsigned long	p;

	if (add == NULL)
	{
		ft_putstr("0x0", len);
		return ;
	}
	p = (unsigned long)add;
	ft_putstr("0x", len);
	print_longhex(p, len);
}
