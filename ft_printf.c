/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:00:05 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/16 18:35:29 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	ptr;

	va_start(ptr, format);
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = i + 1;
			if (format[i] == '%')
				j += write(1, &format[i], 1);
			if (format[i] == 'c')
				j += ft_putchar(va_arg(ptr, int));
			else if (format[i] == 's')
				j += ft_putstr(va_arg(ptr, char *));
			else if (format[i] == 'd')
				j += ft_putnbr(va_arg(ptr, int));
			else if (format[i] == 'i')
				j += ft_putnbr(va_arg(ptr, int));
			else if (format[i] == 'u')
				j += ft_print_base(va_arg(ptr, unsigned int),
						"0123456789", 'u');
			else if (format[i] == 'x')
				j += ft_print_base(va_arg(ptr, unsigned int),
						"0123456789abcdef", 'x');
			else if (format[i] == 'X')
				j += ft_print_base(va_arg(ptr, unsigned int),
						"0123456789ABCDEF", 'X');
			else if (format[i] == 'p')
			{
				j += write(1, "0x", 2);
				j += ft_print_base(va_arg(ptr, unsigned long),
						"0123456789abcdef", 'x');
			}
		}
		else
			j += write(1, &format[i], 1);
		i++;
	}
	va_end(ptr);
	return (j);
}
