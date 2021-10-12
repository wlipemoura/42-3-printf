/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:10:08 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 16:10:10 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(unsigned long int integer, unsigned int base)
{
	size_t	thismanychars;

	thismanychars = 0;
	if (integer == 0)
		return (1);
	while (integer)
	{
		thismanychars++;
		integer /= base;
	}
	return (thismanychars);
}

char	*ft_itoa_base(unsigned long number, unsigned int base)
{
	char			*converted_number;
	size_t			thismanychars;
	char			*ptr;
	unsigned long	leftovers;
	char			*representation;

	representation = "0123456789abcdef";
	thismanychars = ft_countdigits(number, base);
	converted_number = ft_calloc(thismanychars + 1, sizeof(char));
	ptr = &converted_number[thismanychars];
	while (thismanychars--)
	{
		--ptr;
		leftovers = number % base;
		*ptr = representation[leftovers];
		number /= base;
	}
	return (ptr);
}
