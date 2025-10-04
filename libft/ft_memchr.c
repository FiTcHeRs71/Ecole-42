
#include "libft.h"


void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	int i;

	str = (unsigned char *)s;
	i = 0;
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*int		main(void)
{
	char *str = "BONJOUR";
	char	*r;
	//char	*s;
	int	c = 'J';
	size_t	n = 3;

	r = ft_memchr(str, c + 256, n);
	//s = memchr(str, c, n);

	printf("%s\n", r);
	//printf("%s\n", s);
}*/
/*La fonction memchr() localise la première occurrence de c (converti en caractère non signé) dans la chaîne s.*/