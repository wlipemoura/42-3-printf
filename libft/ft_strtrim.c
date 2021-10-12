/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:29 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/07 17:51:09 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	counter;

	counter = 0;
	if (s1 == NULL)
		return (NULL);
	while (*(s1 + counter) && ft_strrchr(set, *(s1 + counter)))
		counter++;
	len = ft_strlen(s1 + counter);
	while (len && ft_strrchr(set, *(s1 + counter + len)))
		len--;
	return (ft_substr((s1 + counter), 0, len + 1));
}
