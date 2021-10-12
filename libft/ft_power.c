#include "libft.h"

int	ft_power(int basis, size_t exponent)
{	
	int	basis_backup;

	basis_backup = basis;
	if (exponent == 0)
	{
		if (basis == 0)
			return ('\0');
		else if (basis > 0)
			return (1);
		else
			return (-1);
	}
	while (exponent > 1)
	{
		basis *= basis_backup;
		if (exponent > 0)
			--exponent;
	}
	return (basis);
}
