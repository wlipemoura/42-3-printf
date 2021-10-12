#include "libftprintf.h"
#include <stdio.h>

char	*ft_itoa_address(unsigned long address)
{
	char	*prefix;
	char	*temp;
	char	*returning;

	prefix = "0x";
	temp = ft_itoa_base(address, 16);
	returning= ft_strjoin(prefix, temp);
	free(temp);
	return (returning);
}

// int	main(void)
// {
// 	char *teste;
// 	char *ptr;

// 	teste = "a";
// 	ptr = ft_itoa_address(&teste);
// 	printf("%p\n", &teste);
// 	printf("%s\n", ptr);
// 	free(ptr);
// }