#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	size_t i;

	i = 5;
	ft_bzero(str, i);
	printf("%s\n", (char*)ft_bzero(str, i));
	//printf("%s\n", (char*)bzero(str, i));
}


/*This function does not return anything and if the number of characters to write you passed as size_t n is 0, bzero does nothing.*/