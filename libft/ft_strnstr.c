

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (!needle)
	{
		return ((char*)haystack);
	}
	while (haystack[i] && i < (int)len) 
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				return ((char*)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main (void)
{
	char	*str = "fdSFCvqscapi";
	char	*needle = "capi";
	size_t len = 3;

	char *finder;

	finder = ft_strnstr(str, needle, len);
	printf("%s", finder);
}*/

/*La fonction strnstr() localise la première occurrence de la chaîne terminée par un caractère nul (needle) dans la chaîne haystack, 
en recherchant au maximum len caractères.
Les caractères situés après un '\0' ne sont pas pris en compte dans la recherche.*/