/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:19 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/05 19:19:50 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (!src && !dest && n > 0)
		return (NULL);
	if (src > dest)
	{
		while (cont < n)
		{
			*(unsigned char *)(dest + cont) = *(unsigned char *)(src + cont);
			cont++;
		}
	}
	else
	{
		while (n != 0)
		{
			*(unsigned char *)(dest + n - 1) = *(unsigned char *)(src + n - 1);
			n--;
		}
	}
	return (dest);
}
