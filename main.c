#include <stdio.h>
#include "libftprintf.h"
int	ft_printf(const char *fmt, ...);

int	main(void)
{
	char *str = NULL;
	char			c;
	int				h;
	int				i;
	int				d;
	unsigned int	l;

	// str = "test";
	// c = 't';
	// h = 0x42451;
	// i = 42;
	// d = -1;
	// l = 2294967290; // Buscar qual o menor negativo que o unsigned converte entre -2000000000 -3000000000
	printf("OR %d\n", printf("%p\n", str));
	printf("GR %d\n", ft_printf("%p\n", str));
	// printf("Original: %s\n1c = %c\n2h = %d\n3i = %i\n4d = %d\n%%\n5ulong: %u\n6hex = %x\n7HEX = %X\n8p = %p\n", str, c, h, i, d, l, d, d, str);
	// printf("--\n");
	// ft_printf("G: %s\n1c = %c\n2h = %d\n3i = %i\n4d = %d\n%%\n5ulong: %u\n6hex = %x\n7HEX = %X\n8p = %p\n", str, c, h, i, d, l, d, d, str);
//	printf("Original: %c\n", c);
//	ft_printf("Generica: %c\n", c);
	return (0);
}
