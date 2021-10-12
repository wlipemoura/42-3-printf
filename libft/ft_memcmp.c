/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:12 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:14:12 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (*(unsigned char *)(s1 + cont) != *(unsigned char *)(s2 + cont))
			return (*(unsigned char *)(s1 + cont)
			- *(unsigned char *)(s2 + cont));
		cont++;
	}
	return (0);
}
