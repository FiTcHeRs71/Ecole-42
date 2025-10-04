

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = ft_strlen(s1);
	i = 0;
	dest = ft_calloc(len + 1, sizeof(char));
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it.
The pointer may subsequently be used as an argument to the function free(3).*/