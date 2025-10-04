

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int		main(void)
{
	char *str = "tripouille";
	int c = 't';
	char *finder;

	finder = ft_strchr(str, c + 256);
	printf("%s", finder);
}*/

/*Cette fonction recherche la dernière occurrence du caractère passé en
second paramètre dans la chaîne de caractères spécifiée via le premier paramètre.*/