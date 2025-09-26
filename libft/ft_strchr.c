

char *ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return((char*)s);
		}
	}
	if (*s == c)
	{
		return((char*)s);
	}
	return (NULL);
}

/*int		main(void)
{
	char *str = "KCORP ON FIRE !!!!";
	int c = 'Z';
	char *finder;

	finder = ft_strchr(str, c);
	printf("%s", finder);
}*/

/*Cette fonction recherche la dernière occurrence du caractère passé en 
second paramètre dans la chaîne de caractères spécifiée via le premier paramètre.*/