/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:15:23 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/04 19:15:25 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	go(const char *big, const char *little, size_t len, size_t *lit_pos_on_big)
{
	size_t	big_cont;
	size_t	little_cont;

	big_cont = 0;
	little_cont = 0;
	while (big_cont < len && *(big + big_cont) && *(little + little_cont))
	{
		if (*(little + little_cont) == *(big + big_cont))
			(little_cont)++;
		else
		{
			little_cont = 0;
			(*lit_pos_on_big)++;
			big_cont = *lit_pos_on_big;
			continue ;
		}
		(big_cont)++;
	}
	if ((*(little + little_cont) == '\0'))
		return (0);
	else
		return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_pos_on_big;

	lit_pos_on_big = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	if (len > ft_strlen(big))
		len = ft_strlen(big) + 1;
	if (go(big, little, len, &lit_pos_on_big) == 0)
		return ((char *)(big + lit_pos_on_big));
	return (NULL);
}
