#ifndef LIBPRINTF_H
# define LIBPRINTF_H

int		ft_putcharm(char c, int fd);
int		ft_putstrm(char *s, int fd);
int		ft_putnbrm(int n, int fd);
int		ft_putunbrm(unsigned int n, int fd);
char	*ft_itoa_address(void *address);

#endif