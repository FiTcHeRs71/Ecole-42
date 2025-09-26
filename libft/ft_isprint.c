

int    ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
	else
	{
   		return (0);
	}
}

/* The isprint() function tests for any printing character, including space. 
The value of the argument must representable as an unsigned char or the value of EOF.*/