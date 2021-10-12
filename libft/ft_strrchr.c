/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:26 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:15:27 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = (ft_strlen(s));
	while (*(s + counter) != (char) c && counter != 0)
		counter--;
	if (*(s + counter) == (char) c)
		return ((char *)s + counter);
	return (NULL);
}
