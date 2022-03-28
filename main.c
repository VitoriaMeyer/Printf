#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	int	n = -2000000000;
	unsigned int u = 177777777;
	char c = 'B';
	char *s = "uwu";
	int count;
	
	count = 0;
	printf("\n");
	printf("\033[32m  --------] STRINGS [---------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%s\n", s);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%s\n", s);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");

	printf("\033[32m  ----------] CHAR [----------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%c\n", c);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%c\n", c);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");

	printf("\033[32m  --------] DECIMAL [---------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%d\n", n);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%d\n", n);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");	
	
	printf("\033[32m  --------] INTEGER [---------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%i\n", n);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%i\n", n);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");

	printf("\033[32m  --------] UNSIGNED [---------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%u %u\n", n, u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%u %u\n", n, u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");
	
	printf("\033[32m  ---------] SINAL [----------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%%\n");
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%%\n");
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");

	printf("\033[32m  -------] HEXADECIMAL [------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%x\n", u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%x\n", u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");
	printf("\033[32m[ upcse X ] ------\n\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%X\n", u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%X\n", u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");

	printf("\033[32m  ---------] POINTER [--------  \n");
	printf("\033[36m\n");
	count = ft_printf(" ft_Ptf -› \033[39m%p\n", u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\033[36m\n");
	count = printf(" Printf -› \033[39m%p\n", u);
	printf("\033[33m ◊ (%d)\n", count);
	printf("\n");
}