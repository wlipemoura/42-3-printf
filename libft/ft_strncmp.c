/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:18 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/07 17:03:59 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (*(s1 + cont) && *(s2 + cont)
		&& cont < (n - 1)
		&& (*(s1 + cont) == *(s2 + cont)))
		cont++;
	if ((*(s1 + cont) != *(s2 + cont) && n))
		return (*(unsigned char *)(s1 + cont) - *(unsigned char *)(s2 + cont));
	return (0);
}
