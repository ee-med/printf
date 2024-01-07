#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putstr(const char *str, int *len);
void	ft_putnbr(long nbr, int *len);
void	print_ui(unsigned long nbr, char xXx, int *len);
void	print_address(void *address, int *len);

#endif