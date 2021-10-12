/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:15 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 20:25:48 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int	counter;
	size_t			stringlen;
	char			*newstring;
	char			character;

	if (!s)
		return (NULL);
	stringlen = ft_strlen(s);
	counter = 0;
	newstring = ft_calloc(stringlen + 1, sizeof(char));
	if (!newstring)
		return (NULL);
	while (counter < stringlen)
	{
		character = *(char *)(s + counter);
		*(newstring + counter) = (*f)(counter, character);
		counter++;
	}
	return (newstring);
}
