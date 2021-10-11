/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:58 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/09 18:51:52 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string;
	size_t	length;

	length = ft_strlen(s) + 1;
	new_string = ft_calloc(length, sizeof(char));
	if (!new_string)
		return (NULL);
	ft_memmove(new_string, s, length);
	return (new_string);
}
