#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include "libraries/libft/libft.h"
#include <stdarg.h> // va_start, va_end, va_copy and va_arg. type va_list

int		ft_putcharm(char c, int fd);
int	ft_putstrm(char *s, int fd, int flag);
int		ft_putnbrm(int n, int fd);
int		ft_putunbrm(unsigned int n, int fd);
char	*ft_itoa_address(unsigned long address);
int	ft_printf(const char *fmt, ...);

#endif
