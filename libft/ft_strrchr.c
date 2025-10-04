

#include "libft.h"


char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	i--;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

/*int		main(void)
{
	char *str = "KCORP ON FIRE !!!!";
	int c = 'P';
	char *finder;

	finder = ft_strrchr(str, c);
	printf("%s", finder);
}*/