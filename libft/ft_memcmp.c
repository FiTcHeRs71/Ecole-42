

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		n--;
		str1++;
		str2++;
	}
	return (0);
}

/*int		main(void)
{
	char *str = "KCORP";
	char *stt = "KCOR";
	int r;

	r = ft_memcmp(str, stt, 30);
	printf("%d", r);
}*/


/*La fonction memcmp() compare la chaîne d’octets s1 avec la chaîne d’octets s2.
Les deux chaînes sont supposées avoir une longueur de n octets.*/