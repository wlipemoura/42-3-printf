/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsomething.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:58:15 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 15:59:01 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putcharm(char c, int fd)
{
	write (fd, &c, 1);
	return (1);
}

int	ft_putstrm(char *s, int fd, int flag)
{
	int	len;

	if (!s)
	{
		write (fd, "(null)", 6);
		return (6);
	}
	write (fd, s, ft_strlen(s));
	len = ft_strlen(s);
	if (flag == 1)
		free(s);
	return (len);
}

static void	ft_write_nbr(unsigned int n, int *howmanychars, int fd)
{
	int		leftovers;
	char	converted_digit;

	if (n)
	{
		leftovers = (n % 10);
		converted_digit = leftovers + '0';
		(*howmanychars)++;
		n /= 10;
		ft_write_nbr(n, howmanychars, fd);
		write(fd, &converted_digit, 1);
	}
}

int	ft_putnbrm(int n, int fd)
{
	unsigned int	integer;
	int				howmanychars;

	howmanychars = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		howmanychars++;
	}
	if (n < 0)
	{
		integer = -n;
		write(fd, "-", 1);
		howmanychars++;
	}
	else
		integer = n;
	ft_write_nbr(integer, &howmanychars, fd);
	return (howmanychars);
}

int	ft_putunbrm(unsigned int n, int fd)
{
	unsigned int	integer;
	int				howmanychars;

	howmanychars = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		howmanychars++;
	}
	if (n < 0)
	{
		integer = -n;
		write(fd, "-", 1);
		howmanychars++;
	}
	else
		integer = n;
	ft_write_nbr(integer, &howmanychars, fd);
	return (howmanychars);
}
