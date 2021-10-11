/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:13:47 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:13:48 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	finalsize;

	finalsize = nmemb * size;
	p = malloc (finalsize);
	if (!p)
		return (NULL);
	ft_bzero (p, finalsize);
	return (p);
}
