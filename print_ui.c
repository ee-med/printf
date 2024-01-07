/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hach <mel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 22:57:51 by mel-hach          #+#    #+#             */
/*   Updated: 2024/01/07 22:58:56 by mel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_ui(unsigned int nbr, char xXu, int *len)
{
	char	*hex;
	char	*hexmaj;

	hex = "0123456789abcdef";
	hexmaj = "0123456789ABCDEF";
	if (xXu == 'X' || xXu == 'x')
	{
		if (nbr >= 16)
			print_ui(nbr / 16, xXu, len);
		if (xXu == 'x')
			ft_putchar(hex[nbr % 16], len);
		else if (xXu == 'X')
			ft_putchar(hexmaj[nbr % 16], len);
	}
	else if (xXu == 'u')
		ft_putnbr(nbr, len);
}
