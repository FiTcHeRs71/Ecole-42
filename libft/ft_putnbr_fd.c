

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	long int	r;

	nb = n;
	r = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	r = (nb % 10) + 48;
	write(fd, &r, 1);
}

/*int	main(void)
{
	int		fd;
	int	n;

	fd = open("test.txt", O_WRONLY);
	n = -2147483648;
	if (fd == -1)
	{
		perror("Erreur d'ouverture");
		return (1);
	}
	ft_putnbr_fd(n,fd);
	close (fd);
	return(0);
}*/