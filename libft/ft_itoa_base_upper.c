/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:46:23 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 16:46:29 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_ch_tobase(unsigned int integer, unsigned int base)
{
	size_t	thismanychars;

	thismanychars = 0;
	if (base > integer)
	{
		thismanychars++;
		return (thismanychars);
	}
	else
		thismanychars++;
	while (integer / base >= base)
	{
		thismanychars++;
		integer /= base;
	}
	thismanychars++;
	return (thismanychars);
}

char	*ft_itoa_base_upper(unsigned int number, unsigned int base)
{
	char			*converted_number;
	size_t			thismanychars;
	char			*ptr;
	unsigned int	leftovers;
	char			*representation;

	representation = "0123456789ABCDEF";
	thismanychars = ft_count_ch_tobase(number, base);
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
