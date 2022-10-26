/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:00:05 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/26 13:00:53 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_composition(const char *format, va_list ptr)
{
	int		len;

	len = 0;
	if (*format == 'c')
		len += ft_putchar(va_arg(ptr, int));
	else if (*format == 's')
		len += ft_putstr(va_arg(ptr, char *));
	else if (*format == 'i' || *format == 'd')
		len += ft_putnbr(va_arg(ptr, int));
	else if (*format == 'u')
		len += convert_base(va_arg(ptr, unsigned int),
				"0123456789", 'u');
	else if (*format == 'x')
		len += convert_base(va_arg(ptr, unsigned int),
				"0123456789abcdef", 'x');
	else if (*format == 'X')
		len += convert_base(va_arg(ptr, unsigned int),
				"0123456789ABCDEF", 'X');
	else if (*format == 'p')
	{
		len += write(1, "0x", 2);
		len += convert_base(va_arg(ptr, unsigned long),
				"0123456789abcdef", 'x');
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			len;
	va_list		ptr;

	va_start(ptr, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = i + 1;
			if (format[i] == '%')
				len += write(1, &format[i], 1);
			len += ft_composition(&format[i], ptr);
		}
		else
			len += write (1, &format[i], 1);
		i++;
	}
	va_end(ptr);
	return (len);
}
// int main(void)
// {
// 	ft_printf("   hello%", "hello");
// 	// printf("\n");
// 	// printf("%d", printf("   hello%c%d%s", 'c', 123, "hello"));
// }
