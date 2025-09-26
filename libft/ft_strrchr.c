


char *ft_strrchr(const char *s, int c)
{
	size_t i;
	
	i = ft_strlen(s);
	while (i-- > 0)
	{
		if(s[i] == c)
		{
			return((char*)&s[i]);
		}
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