#include "libft.h"

static int	ft_countdigits(unsigned int integer, unsigned int base)
{
	size_t	thismanychars;

	thismanychars = 0;
	while (integer)
	{
		thismanychars++;
		integer /= base;
	}
	return (thismanychars);
}

char	*ft_itoa_base(unsigned int number, unsigned int base)
{
	char			*converted_number;
	size_t			thismanychars;
	char			*ptr;
	unsigned int	leftovers;
	char			*representation;

	representation = "0123456789abcdef";
	thismanychars = ft_countdigits(number, base);
	converted_number = ft_calloc(thismanychars + 1, sizeof(char));
	ptr = &converted_number[thismanychars];
	while (thismanychars--)
	{
		--ptr;
		leftovers = number % base;
		*ptr = representation[leftovers];
		number /= base;
	}
	return (ptr);
}
