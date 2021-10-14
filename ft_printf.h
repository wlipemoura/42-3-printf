/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:00:38 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/14 16:34:32 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

/**
 * @brief Outputs the character 'c' to the given file descriptor.
 *
 * @param c Is the character to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return the number of characters outputed (always 1).
 */
int		ft_putcharm(char c, int fd);

/**
 * @brief Outputs the string 's' to the given file descriptor.
 *
 * @param s Is the string to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return the number of characters outputed.
 */
int		ft_putstrm(char *s, int fd, int flag);

/**
 * @brief Outputs the integer 'n' to the given file descriptor.
 *
 * @param n Is the integer to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return the number of digits outputed.
 */
int		ft_putnbrm(int n, int fd);

/**
 * @brief Outputs the unsigned integer 'n' to the given file descriptor.
 *
 * @param n Is the integer to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return the number of digits outputed.
 */
int		ft_putunbrm(unsigned int n, int fd);

/**
 * @brief Converts an integer into a string formated as a memory address.
 *
 * @param address Is the unsigned long integer you must to convert into an
 * address format.
 *
 * @return a pointer to the converted string (always begins by '0x').
 */
char	*ft_itoa_address(unsigned long address);

int		ft_printf(const char *fmt, ...);

#endif
