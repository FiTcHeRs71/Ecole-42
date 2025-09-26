
size_t		ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}


/*The strlen() function returns the number of characters before the terminating NUL (\0) character of the string.*/