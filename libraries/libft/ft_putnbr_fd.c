/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:46 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/08 12:50:25 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_write_nbr(unsigned int n, int fd)
{
	int		leftovers;
	char	converted_digit;

	if (n)
	{
		leftovers = (n % 10);
		converted_digit = leftovers + '0';
		n /= 10;
		ft_write_nbr(n, fd);
		write(fd, &converted_digit, 1);
	}
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	integer;

	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		integer = -n;
		write(fd, "-", 1);
	}
	else
		integer = n;
	ft_write_nbr(integer, fd);
	return ;
}
