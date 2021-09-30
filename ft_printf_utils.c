/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:48:07 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/09/30 18:35:09 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int    ft_count_digit(long int c, int base)
{
    int    len;

    if (!c)
        return (1);
    len = 0;
    while (c > 0)
    {
        c /= base;
        len++;
    }
    return (len);
}
void	string_filler(char **ptr, long int n_cpy, int signal)
{
    if (!n_cpy)
        *(--*ptr) = '0';
    while (n_cpy)
    {
        *(--*ptr) = n_cpy % 10 + '0';
        n_cpy /= 10;
    }
	if (signal)
		*(--*ptr) = '-';
}

int    ft_putnbr(int number, int fd)
{
    char                *ptr;
    char                *str;
    long int            n_cpy;
    int                    len;
	int signal;

    n_cpy = number;
	signal = number < 0;
	if (signal)
		n_cpy = -n_cpy;
    len = ft_count_digit(n_cpy, 10);
    str = (char *)malloc(len + 1 + signal);
    if (!str)
        return ('\0');
    ptr = &str[len + signal];
    *ptr = '\0';
	string_filler(&ptr, n_cpy, signal);
	write(fd, str, len + signal);
	free(str);
    return (len + signal);
}

int	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
	return(1);
}

int	ft_putstr(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	return(ft_strlen(s));
}

// int	main(void)
// {
// 	printf("\n counter = %d", ft_putnbr(-157982, 1));
// 	return (0);
// }