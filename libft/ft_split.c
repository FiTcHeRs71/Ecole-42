

#include "libft.h"

size_t	ft_counter_of_str(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while ((s[i] && s[i] != c))
			i++;
	}
	return (count);
}

char	**ft_complet_array(char **array_of_string, char c, char const *s)
{
	size_t	count;
	size_t	start;
	size_t	len;
	size_t	y;

	count = 0;
	y = 0;
	while (s[count])
	{
		while (s[count] && s[count] == c)
			count++;
		if (!s[count])
			break ;
		start = count;
		len = 0;
		while (s[count] && s[count] != c)
		{
			count++;
			len++;
		}
		array_of_string[y] = ft_substr(s, start, len);
		y++;
	}
	array_of_string[y] = NULL;
	return (array_of_string);
}

char	**ft_split(char const *s, char c)
{
	char	**array_of_string;
	size_t	count;

	if (!s)
		return (NULL);
	if (c == '\0')
	{
		if (*s == '\0')
		{
			array_of_string = ft_calloc(1, sizeof(char *));
			return (array_of_string);
		}
		array_of_string = ft_calloc(2, sizeof(char *));
		array_of_string[0] = ft_strdup(s);
		array_of_string[1] = NULL;
		return (array_of_string);
	}
	count = ft_counter_of_str(s, c);
	array_of_string = ft_calloc(count + 1, sizeof(char *));
	ft_complet_array(array_of_string, c, s);
	return (array_of_string);
}

/*int	main(void)
{
	char	*str = "--1-2--3---4----5-----42";
	char	c = '-';
	char	**retour;
	retour= ft_split(str,c);
	for (int i = 0; i < 6; i++)
	{
		printf("%s\n", retour[i]);
	}
	return (0);
}*/