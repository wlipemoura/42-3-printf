#include "libftprintf.h"
# include "libraries/libft/libft.h"

char	*ft_itoa_address(void *address)
{
	unsigned long	new_variable;
	char	*prefix;
	char	*temp;
	char	*returning;

	prefix = "0x";
	new_variable = (unsigned long) address;
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