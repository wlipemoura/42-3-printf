/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:48:14 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/08 23:05:20 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//PROJECT RULES

//It must not do the buffer management like the real printf
//It will manage the following conversions: cspdiuxX%
//It will be compared with the real printf
//You must use the command ar to create your library, using the command libtool
//	is forbidden.

//Conversions
	//1. %c print a single character.
	//2. %s print a string of characters.
	//3. %p The void * pointer argument is printed in hexadecimal.
	//4. %d print a decimal (base 10) number.
	//5. %i print an integer in base 10.
	//6. %u print an unsigned decimal (base 10) number.
	//7. %x print a number in hexadecimal (base 16).
	//8. %% print a percent sign.
// for more complete references : man 3 printf / man 3 stdarg

//LEARNING GOALS
//	1. What is variatic arguments and how to use it?
//	2. How to use github to work colaboratively? (2 workmates team)

//GIT HUB COLLABORATION RULES
//1. Branches

// printf("String %i etc...\n", my_int, ...);
/*
	va_list	ap;

	va_start(ap, fmt);
	ft_func(va_arg(ap, type));
	va_end(ap)
*/
// 1. Sweep the string;
// 2. while (*fmt)
//		2.1 If *fmt == '%'
//			2.1.1 Verify if the next char is a placeholder 'cspdiuxX%' if found:
//				2.1.1.1 write with the value of va_arg. (after this reading va_arg skip to next arg)
//		2.2 else write(1, fmt, 1)

#include "libftprintf.h"
# include "libraries/libft/libft.h"

char	*ft_itoa_address(void *address);
int    ft_putnbrm(int n, int fd);
int	ft_putcharm(char c, int fd);
int	ft_putstrm(char *s, int fd);
int	ft_putunbrm(unsigned int n, int fd);

static int	placeholder_identifier(const char **fmt, va_list ap, int *cnt_chars)
{
	if (**fmt == '%')
	{
		(*fmt)++;
		if (**fmt == 's')
			cnt_chars += ft_putstrm(va_arg(ap, char *), 1);
		else if (**fmt == 'c')
			cnt_chars += ft_putcharm(va_arg(ap, int), 1); // Por que não aceita tipo char?
		else if (**fmt == 'd' || **fmt == 'i')
			cnt_chars += ft_putnbrm(va_arg(ap, int), 1);
		else if (**fmt == '%')
		{
			write(1, "%", 1);
			cnt_chars++;
		}
		else if (**fmt == 'u')
			cnt_chars += ft_putunbrm(va_arg(ap, int), 1);
		else if (**fmt == 'x')
			cnt_chars += ft_putstrm(ft_itoa_base(va_arg(ap, int), 16), 1);
		else if (**fmt == 'X')
			cnt_chars += ft_putstrm(ft_itoa_base_upper(va_arg(ap, int), 16), 1);
		else if (**fmt == 'p')
			cnt_chars += ft_putstrm(ft_itoa_address(va_arg(ap, void *)), 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list ap;
	int 	printed_chars;

	printed_chars = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (placeholder_identifier(&fmt, ap, &printed_chars))
		{
			fmt++;
			continue;
		}
		write(1, fmt, 1);
		fmt++;
	}
	va_end(ap);
	return (printed_chars);
}
