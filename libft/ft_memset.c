/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:21 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:14:23 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		*(unsigned char *)(s + cont) = c;
		cont++;
	}
	return ((unsigned char *)s);
}
