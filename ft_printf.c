/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:48:14 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/14 16:30:14 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_printhex(unsigned int number, int flag)
{
	if (flag == 1)
		return (ft_itoa_base_upper(number, 16));
	else
		return (ft_itoa_base(number, 16));
}

static int	placeholder_identifier(const char **fmt, va_list ap, int *ch)
{
	if (**fmt == '%')
	{
		(*fmt)++;
		if (**fmt == 's')
			*ch += ft_putstrm(va_arg(ap, char *), 1, 0);
		else if (**fmt == 'c')
			*ch += ft_putcharm(va_arg(ap, int), 1);
		else if (**fmt == 'd' || **fmt == 'i')
			*ch += ft_putnbrm(va_arg(ap, int), 1);
		else if (**fmt == '%')
		{
			write(1, "%", 1);
			(*ch)++;
		}
		else if (**fmt == 'u')
			*ch += ft_putunbrm(va_arg(ap, int), 1);
		else if (**fmt == 'x')
			*ch += ft_putstrm(ft_printhex(va_arg(ap, unsigned int), 0), 1, 1);
		else if (**fmt == 'X')
			*ch += ft_putstrm(ft_printhex(va_arg(ap, unsigned int), 1), 1, 1);
		else if (**fmt == 'p')
			*ch += ft_putstrm(ft_itoa_address(va_arg(ap, unsigned long)), 1, 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		printed_chars;

	printed_chars = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (placeholder_identifier(&fmt, ap, &printed_chars))
		{
			fmt++;
			continue ;
		}
		write(1, fmt, 1);
		printed_chars++;
		fmt++;
	}
	va_end(ap);
	return (printed_chars);
}
