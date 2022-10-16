#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int     ft_putchar(char c);
int     ft_print_base(unsigned long long n, char *base, char c);
int 	ft_putnbr(int nb);
int 	ft_putstr(char *str);
int	ft_strlen(const char *str);
int     ft_count(int n);
int		ft_printf(const char *format, ...);


#endif
