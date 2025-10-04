

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	i = 0;
	str = ft_calloc(len + 1, sizeof(char));
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

/*char	ft_TOUP(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

int	main(void)
{
	char	*str = "abcdefghijklmnopqrstuvwxyz";
	char 	*retour;

	retour = ft_strmapi(str, ft_TOUP);
	printf("%s\n", retour);
	return (0);
}*/