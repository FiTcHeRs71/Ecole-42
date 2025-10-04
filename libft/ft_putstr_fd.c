

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int	main(void)
{
	int	fd;
	char	*c;

	fd = open("test.txt", O_WRONLY);
	c = "KCORP ON FIRE";
	if (fd == -1)
	{
		perror("Erreur d'ouverture");
		return (1);
	}
	ft_putstr_fd(c,fd);
	close (fd);
	return(0);
}*/

/*
NAME
	ft_putstr_fd -- write a string on a specified file descriptor
SYNOPSIS
	void ft_putstr_fd(char *s, int fd);
DESCRIPTION
	Write the string s on the file descriptor fd.
PARAMETERS
	s: string to write
	fd: file descriptor on which to write
RETURN VALUES
	ft_putstr_fd() does not return anything
AUTHORIZED EXTERNAL FUNCTIONS
	write(2)
	*/