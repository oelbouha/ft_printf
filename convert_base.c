/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:58:38 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/26 12:55:43 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	if (str)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		return (i);
	}
	return (0);
}

void	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned int	size;

	size = ft_strlen(base);
	if (n < size)
		ft_putchar(base[n]);
	else if (n >= size)
	{
		ft_putnbr_base(n / size, base);
		ft_putnbr_base(n % size, base);
	}
}

int	convert_base(unsigned long n, char *base, char c)
{
	unsigned int	len;
	unsigned int	size;

	size = ft_strlen(base);
	if (c == 'x')
		ft_putnbr_base(n, base);
	else if (c == 'X')
		ft_putnbr_base(n, base);
	else
		ft_putnbr_base(n, base);
	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / size;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	unsigned int	i;
	unsigned int	n;
	char			str[12];

	if (nb < 0)
	{
		write(1, "-", 1);
		n = nb * -1;
	}
	else
		n = nb;
	i = 10;
	while (n / 10)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
	i--;
	}
	str[i] = n % 10 + 48;
	write (1, &str[i], 11 - i);
	if (nb < 0)
		return (11 - i + 1);
	return (11 - i);
}
