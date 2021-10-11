/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:14:52 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/09 18:25:00 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	howmanystrings(const char *s, char c)
{
	size_t	manystrs;
	size_t	count;

	manystrs = 0;
	count = 0;
	while (*(s + count))
	{
		if (*(s + count) != c)
		{
			manystrs++;
			while (*(s + count) != c && *(s + count))
				count++;
		}
		while (*(s + count) == c && *(s + count))
			count++;
	}
	return (manystrs);
}

static size_t	chars(const char *s, char c)
{
	size_t	thismanychars;

	thismanychars = 0;
	while (*(s + thismanychars) != c
		&& *(s + thismanychars))
		thismanychars++;
	return (thismanychars);
}

static void	freespace(char **s, size_t count)
{
	while (count > 0)
	{
		free(*(s + count));
		count--;
	}
	free(s);
}

static void	splitter(const char *s, char c, size_t *manystrs, char **spltd)
{
	size_t	hmnyspltd_index;
	size_t	hmnychar_index;

	hmnyspltd_index = 0;
	hmnychar_index = 0;
	while (*s && hmnyspltd_index < *manystrs)
	{
		while (*s == c)
			s++;
		if (hmnychar_index == 0)
			*(spltd + hmnyspltd_index) = ft_calloc (1, chars(s, c) + 1);
		if (!spltd)
		{
			freespace(spltd, hmnyspltd_index);
			return ;
		}
		spltd[hmnyspltd_index][hmnychar_index] = *s;
		s++;
		hmnychar_index++;
		if (*s == c)
		{
			hmnyspltd_index++;
			hmnychar_index = 0;
		}
	}
}

char	**ft_split(const char *s, char c)
{
	char	**spltd;
	size_t	manystrs;

	if (!s)
		return (NULL);
	manystrs = howmanystrings(s, c);
	spltd = ft_calloc(sizeof(char *), manystrs + 1);
	if (!spltd)
		return (NULL);
	splitter(s, c, &manystrs, spltd);
	return (spltd);
}
