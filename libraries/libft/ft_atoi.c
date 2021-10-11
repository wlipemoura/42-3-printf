/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:06:31 by user42            #+#    #+#             */
/*   Updated: 2021/09/04 20:24:34 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numpos(const char *nptr, int *isnegative);
static size_t	numlength(const char *nptr);
static size_t	calculator(const char *nptr,
					size_t numerical_length, size_t num_position);
static size_t	expoente(size_t numerical_length);

int	ft_atoi(const char *nptr)
{
	size_t	num_position;
	size_t	numerical_length;
	int		result;

	result = 1;
	numerical_length = numlength(nptr);
	num_position = numpos(nptr, &result);
	if (numlength(nptr) == 0)
		return (0);
	if (result < 0)
		result = calculator(nptr, numerical_length, num_position) * -1;
	else
		result = calculator(nptr, numerical_length, num_position);
	return (result);
}

static size_t	numlength(const char *nptr)
{
	size_t	initialpos;
	size_t	finalpos;
	size_t	numerical_length;
	int		unecessary;

	initialpos = numpos(nptr, &unecessary);
	finalpos = initialpos;
	while (ft_isdigit(*(nptr + finalpos)))
		finalpos++;
	numerical_length = finalpos - initialpos;
	return (numerical_length);
}

static size_t	numpos(const char *nptr, int *isnegative)
{
	size_t	num_position;

	num_position = 0;
	while (((*(nptr + num_position) == ' ')
			|| (*(nptr + num_position) == '\t')
			|| (*(nptr + num_position) == '\r')
			|| (*(nptr + num_position) == '\n')
			|| (*(nptr + num_position) == '\v')
			|| (*(nptr + num_position) == '\f'))
		&& (num_position <= ft_strlen(nptr)))
		num_position++;
	if (*(nptr + num_position) == '+' || *(nptr + num_position) == '-')
	{
		if (ft_isdigit(*(nptr + num_position + 1)) == 0)
			return (0);
		else if (*(nptr + num_position) == '-')
			*isnegative = -1;
		num_position++;
	}
	return (num_position);
}

static size_t	calculator(const char *nptr,
	size_t numerical_length, size_t num_position)
{
	size_t	aux;
	size_t	ret;

	ret = 0;
	while (num_position < (num_position + numerical_length))
	{
		aux = (*(nptr + num_position) - 48) * expoente(numerical_length);
		ret += aux;
		numerical_length--;
		num_position++;
	}
	return (ret);
}

static size_t	expoente(size_t numerical_length)
{
	size_t	result;

	result = 1;
	if (numerical_length == 0)
		return (result);
	else
	{
		while (numerical_length != 1)
		{
			result = result * 10;
			numerical_length--;
		}
	}
	return (result);
}
