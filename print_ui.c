#include "ft_printf.h"

void	print_ui(unsigned long nbr, char xXu, int *len)
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
