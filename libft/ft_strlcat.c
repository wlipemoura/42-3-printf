/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:07 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/07 17:17:56 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_count;
	size_t	dst_count;
	size_t	dst_len;
	size_t	src_len;

	src_count = 0;
	dst_count = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	while (*(dst + dst_count))
		dst_count++;
	while (*(src + src_count) && (dst_count < (size - 1)))
	{
		*(dst + dst_count) = *(src + src_count);
		dst_count++;
		src_count++;
	}
	*(dst + dst_count) = '\0';
	return (dst_len + src_len);
}
