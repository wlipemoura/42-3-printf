#include "libftprintf.h"
#include <stdio.h>

char	*ft_itoa_address(void *address)
{
	unsigned long	new_variable;
	char	*prefix;
	char	*temp;
	char	*returning;

	prefix = "0x";
	new_variable = (unsigned long) address;
	printf("Aqui: %lu", new_variable);
	temp = ft_itoa_base(new_variable, 16);
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