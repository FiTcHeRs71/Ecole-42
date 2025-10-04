

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	int	fd;
	char	c;

	fd = open("test.txt", O_WRONLY);
	c = 'A';
	if (fd == -1)
	{
		perror("Erreur d'ouverture");
		return (1);
	}
	ft_putchar_fd(c,fd);
	close (fd);
	return(0);
}*/

/*
NAME
	ft_putchar_fd -- write character c on a specified file descriptor
SYNOPSIS
	void ft_putchar_fd(char c, int fd);
DESCRIPTION
	The ft_putchar_fd() function writes the character c on the file descriptor fd.
PARAMETERS
	c: character to write
	fd: file descriptor on which to write
RETURN VALUES
	ft_putchar_fd() does not return anything.
AUTHORIZED EXTERNAL FUNCTIONS
	write(2)
	*/
