

int		ft_isascii(int c)
{
	if  (c >= 0 && c <= 128)
	{
		return (1);
	}
	else
		return (0);
}


/*Return True if all characters in the string are ASCII, False otherwise.*/