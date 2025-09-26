

int		ft_atoi(const char *str)
{
	int		ngps;
	int		result;

	ngps = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			ngps *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = ((result * 10) + (*str - 48));
		str++;
	}
	return (result * ngps);
}

/*int main(void)
{
	printf("Test 1 : '%s' -> %d\n", "42", ft_atoi("42"));
	printf("Test 2 : '%s' -> %d\n", "   123", ft_atoi("   123"));
	printf("Test 3 : '%s' -> %d\n", "\t\n\v\f\r 77", ft_atoi("\t\n\v\f\r 77"));
	printf("Test 4 : '%s' -> %d\n", "-42", ft_atoi("-42"));
	printf("Test 5 : '%s' -> %d\n", "+42", ft_atoi("+42"));
	printf("Test 6 : '%s' -> %d\n", "--42", ft_atoi("--42"));
	printf("Test 7 : '%s' -> %d\n", "++42", ft_atoi("++42"));
	printf("Test 8 : '%s' -> %d\n", "4a2", ft_atoi("4a2"));
	printf("Test 9 : '%s' -> %d\n", "000123", ft_atoi("000123"));
	printf("Test 10 : '%s' -> %d\n", "-000987", ft_atoi("-000987"));
	return 0;
}*/

int main(void)
{
	printf("Test 1 : '%s' -> %d\n", "9999999999999", atoi("9999999999999"));
}

/*The atoi() function converts the initial portion of the string pointed to by str to int representation.*/