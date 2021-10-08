#include "../../42-1-libft-complete/42-1-libft/libft.h"
#include <stdio.h>

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

 static void	ft_write_nbr(unsigned int n, int *howmanychars, int fd)
{
	int		leftovers;
	char	converted_digit;

	if (n)
	{
		leftovers = (n % 10);
		converted_digit = leftovers + '0';
		(*howmanychars)++;
		n /= 10;
		ft_write_nbr(n, howmanychars, fd);
		write(fd, &converted_digit, 1);
	}
}

int	ft_putnbrm(int n, int fd)
{
	unsigned int	integer;
	int				howmanychars;

	howmanychars = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		howmanychars++;
	}
	if (n < 0)
	{
		integer = -n;
		write(fd, "-", 1);
		howmanychars++;
	}
	else
		integer = n;
	ft_write_nbr(integer, &howmanychars, fd);
	return(howmanychars);
}

int	ft_putunbrm(unsigned int n, int fd)
{
	unsigned int	integer;
	int				howmanychars;

	howmanychars = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		howmanychars++;
	}
	if (n < 0)
	{
		integer = -n;
		write(fd, "-", 1);
		howmanychars++;
	}
	else
		integer = n;
	ft_write_nbr(integer, &howmanychars, fd);
	return(howmanychars);
}
