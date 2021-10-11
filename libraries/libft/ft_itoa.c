/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:07 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:14:08 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	sconvert(unsigned int n, size_t *counter, char *s)
{
	size_t	result;
	size_t	midzeros_verifier;

	result = 10;
	while ((n / result) >= 10)
		result = result * 10;
	if (n / result != 0)
		*(s + *counter) = (n / result) + 48;
	else if (n / result == 0)
	{
		*(s + *counter) = (n % result) + 48;
		return ;
	}
	midzeros_verifier = result / 10;
	while (n % result < midzeros_verifier)
	{
		(*counter)++;
		*(s + *counter) = '0';
		midzeros_verifier /= 10;
		if (midzeros_verifier == 0)
			return ;
	}
	(*counter)++;
	sconvert (n % result, counter, s);
	return ;
}

static int	howmanychars(int n, unsigned int integer)
{
	unsigned int	interator;
	size_t			thismanychars;

	interator = 10;
	thismanychars = 0;
	if (n < 0)
		thismanychars++;
	if (10 > integer)
	{
		thismanychars++;
		return (thismanychars);
	}
	else
		thismanychars++;
	while (integer / interator >= 10)
	{
		thismanychars++;
		interator *= 10;
	}
	thismanychars++;
	return (thismanychars);
}

char	*ft_itoa(int n)
{
	char			*string;
	size_t			counter;
	unsigned int	integer;
	size_t			chars_quantity;

	counter = 0;
	if (n < 0)
		integer = -n;
	else
		integer = n;
	chars_quantity = howmanychars(n, integer);
	string = ft_calloc (chars_quantity + 1, sizeof(char));
	if (!string)
		return (NULL);
	else if (n < 0)
	{
		*(string + counter) = '-';
		counter++;
	}
	sconvert (integer, &counter, string);
	return (string);
}
