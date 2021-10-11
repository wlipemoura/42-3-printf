/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:09 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:14:10 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (*(unsigned char *)(s + counter) != (unsigned char)c)
			counter += sizeof(*(s + counter));
		else if (*(unsigned char *)(s + counter) == (unsigned char)c)
			return ((unsigned char *)(s + counter));
	}
	return (0);
}
