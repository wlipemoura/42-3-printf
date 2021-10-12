/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:00:38 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/12 16:23:58 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_putcharm(char c, int fd);
int		ft_putstrm(char *s, int fd, int flag);
int		ft_putnbrm(int n, int fd);
int		ft_putunbrm(unsigned int n, int fd);
char	*ft_itoa_address(unsigned long address);
int		ft_printf(const char *fmt, ...);

#endif
