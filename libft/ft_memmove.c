


void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    size_t i;

    d = (unsigned char *) dst;
    s = (unsigned char *) src;
    i = 0;
    if (!dst || !src)
    {
        return (dst);
    }
    if (d > s)
    {
        while (len-- > 0)
        {
            d[len] = s[len];
        }
    }
    else
    {
        while (i++ < len)
        {
            d[i] = s[i];
        }
    }
    return (dst);
}


/*int        main(int argc, char **argv)
	{
	    (void)argc;
	    (void)argv;
	
	    int src[] = {-1,2,3,8,5,6,7,8,9,10};
	    //int dest[10];
	    //size_t i;
	
	    //i = 3;
        ft_memmove(src + 2, src , sizeof(int)*8);
        //memmove(src + 2, src , sizeof(int)*8);

        for (int i = 0; i < 10; i++)
        {
             printf("src[%d]=%d\n",i , src[i]);
        }
       // printf("%n\n", src);

    //printf("%n\n", (int*)ft_memmove(src + 2, src , sizeof(int)*8));
   // printf("%n\n\n", (int*)ft_memmovee(src + 2, src , sizeof(int)*8));

	//printf("%n\n", (int*)memmove(src + 2, src , sizeof(int)*8));
    //printf("%s\n", (char*)memcpy(dest, src , sizeof(char)*5));
	}*/

/*   The memmove() function copies len bytes from string src to string dst.
    The two strings may overlap; the copy is always done in a non-destructive manner.*/