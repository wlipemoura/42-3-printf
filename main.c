#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	char *str;
	char			c;
	int				h;
	int				i;
	int				d;
	unsigned int	l;

	// str2 = "test";
	// c = 't';
	// h = 0x42451;
	// i = 42;
	// d = -1;
	// l = 2294967290; // Buscar qual o menor negativo que o unsigned converte entre -2000000000 -3000000000
	ft_printf("%p\n", "teste");
	// printf("-------\n");
	// printf("OR %d\n", printf("%p\n", 140732824853004));
	// printf("GR %d\n", ft_printf("%p\n", 140732824853004));
	// printf("-------\n");
	// printf("OR %d\n", printf("%x\n", -1));
	// printf("GR %d\n", ft_printf("%x\n", -1));
	// printf("Original: %s\n1c = %c\n2h = %d\n3i = %i\n4d = %d\n%%\n5ulong: %u\n6hex = %x\n7HEX = %X\n8p = %p\n", str, c, h, i, d, l, d, d, str);
	// printf("--\n");
	// ft_printf("G: %s\n1c = %c\n2h = %d\n3i = %i\n4d = %d\n%%\n5ulong: %u\n6hex = %x\n7HEX = %X\n8p = %p\n", str, c, h, i, d, l, d, d, str);
//	printf("Original: %c\n", c);
//	ft_printf("Generica: %c\n", c);
	return (0);
}
