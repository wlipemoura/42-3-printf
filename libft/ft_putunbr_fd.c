/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:46 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 16:06:18 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	int		leftovers;
	char	converted_digit;

	if (n == 0)
		write(fd, "0", 1);
	else if (n)
	{
		leftovers = (n % 10);
		converted_digit = leftovers + '0';
		n /= 10;
		ft_putunbr_fd(n, fd);
		write(fd, &converted_digit, 1);
	}
	return ;
}
