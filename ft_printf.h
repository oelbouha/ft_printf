/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbouha <oelbouha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:02:02 by oelbouha          #+#    #+#             */
/*   Updated: 2022/10/26 13:09:50 by oelbouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		convert_base(unsigned long n, char *base, char c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_strlen(const char *str);
int		ft_composition(const char *format, va_list ptr);
int		ft_printf(const char *format, ...);

#endif
