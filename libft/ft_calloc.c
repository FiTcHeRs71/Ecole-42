

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *temp;
	size_t		i;

	if (count == 0 || size == 0)
	{
        return malloc(1); 
	}
	temp = malloc(count * size);
	i = 0;
	if (!temp)
	{
		return (NULL);
	}
	while (i < count * size)
	{
		temp[i++] = 0;
	}
	return (temp);
}

/*int main(void)
{
    int i;
    int *arr1 = ft_calloc(5, sizeof(int));
    int *arr2 = calloc(5, sizeof(int)); // version standard pour comparaison

    if (!arr1 || !arr2)
    {
        printf("Allocation échouée\n");
        return (1);
    }

    printf("=== Test tableau de 5 int ===\n");
    for (i = 0; i < 5; i++)
    {
        printf("ft_calloc[%d] = %d | calloc[%d] = %d\n", i, arr1[i], i, arr2[i]);
    }

    // Test sur des char
    char *s1 = ft_calloc(10, sizeof(char));
    char *s2 = calloc(10, sizeof(char));

    printf("\n=== Test tableau de 10 char ===\n");
    for (i = 0; i < 10; i++)
    {
        printf("ft_calloc[%d] = %d | calloc[%d] = %d\n", i, (unsigned char)s1[i], i, (unsigned char)s2[i]);
    }

    free(arr1);
    free(arr2);
    free(s1);
    free(s2);

    return 0;
}*/

/*calloc() works in the same way as malloc() does, but the difference is that calloc() sets all the memory bytes are set to 0,
 instead of staying as the gibberish that was there in memory before we allocated it.*/