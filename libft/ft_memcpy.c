/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:17 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:17 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src || !dest)
	{
		return (dest);
	}
	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}

	/*int        main(int argc, char **argv)
	{
	    (void)argc;
	    (void)argv;
	
	    char src[] = "AAAAAAAA";
	    char dest[] = "BBBBBBBB";
	    size_t i;
	
	    i = 9;
    printf("%s\n", (char*)ft_memcpy(dest, src, i));
	printf("%s\n", (char*)memcpy(dest, src, i));
	}*/

/*The memcpy function copies maximum n bytes from src to dst. The man talks about memory overlapping, I'll explain this with details on the memmove function page.

As for memset and bzero we'll need some temporary pointers to manipulate our data.

This functions works like the strcpy function, except that memcpy accepts void * as parameters, so we can give it any type of pointer we want to cop*/