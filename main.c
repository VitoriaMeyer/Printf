#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	n = 2000000000;
	char c = 'B';
	char *s = "um churrasco agora era massa";
	int count;
	
	count = 0;
	printf("\n");
	printf("--------] STRINGS [---------\n");
	printf("\n");
	count = ft_printf("Mine ----> %s\n", s);
	printf("(%d)\n", count);
	printf("\n");
	count = printf("Printf --> %s\n", s);
	printf("(%d)\n", count);
	printf("\n");

	printf("----------] CHAR [----------\n");
	printf("\n");
	count = ft_printf("Mine ----> %c\n", c);
	printf("(%d)\n", count);
	printf("\n");
	count = printf("Printf --> %c\n", c);
	printf("(%d)\n", count);
	printf("\n");

	printf("--------] DECIMAL [---------\n");
	printf("\n");
	count = ft_printf("Mine ----> %d\n", n);
	printf("(%d)\n", count);
	printf("\n");
	count = printf("Printf --> %d\n", n);
	printf("(%d)\n", count);
	printf("\n");	
	
	printf("--------] INTEGER [---------\n");
	printf("\n");
	count = ft_printf("Mine ----> %i\n", n);
	printf("(%d)\n", count);
	printf("\n");
	count = printf("Printf --> %i\n", n);
	printf("(%d)\n", count);
	printf("\n");
	
	printf("---------] SINAL [----------\n");
	printf("\n");
	count = ft_printf("Mine ----> %%\n");
	printf("(%d)\n", count);
	printf("\n");
	count = printf("Printf --> %%\n");
	printf("(%d)\n", count);
	printf("\n");
}