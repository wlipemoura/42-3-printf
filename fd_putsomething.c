#include "../../42-1-libft-complete/42-1-libft/libft.h"

int	ft_putcharm(char c, int fd)
{
	write (fd, &c, 1);
	return(1);
}

int	ft_putstrm(char *s, int fd)
{
	if (!s)
		return ('\0');
	write (fd, s, ft_strlen(s));
	return(ft_strlen(s));
}
