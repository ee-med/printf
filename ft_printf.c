#include "ft_printf.h"

void	check_specifier(char specifier, va_list ap, int *len)
{
	if (specifier == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (specifier == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (specifier == 'd')
		ft_putnbr(va_arg(ap, int), len);
	else if (specifier == 'i')
		ft_putnbr(va_arg(ap, int), len);
	else if (specifier == 'x')
		print_ui(va_arg(ap, unsigned int), 'x', len);
	else if (specifier == 'X')
		print_ui(va_arg(ap, unsigned int), 'X', len);
	else if (specifier == 'u')
		print_ui(va_arg(ap, unsigned int), 'u', len);
	else if (specifier == 'p')
		print_address(va_arg(ap, void *), len);
	else
		ft_putchar(specifier, len);

}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	len;

	if (write(1, "", 0) < 0)
		return (-1);
	va_start(ap, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
			check_specifier(*++format, ap, &len);
		else
		{
			write(1, format, 1);
			len++;
		}
		format++;
	}
	return (va_end(ap), len);
}