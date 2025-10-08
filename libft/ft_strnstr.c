/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdcurot <fducrot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:35:38 by fdcurot           #+#    #+#             */
/*   Updated: 2025/10/06 14:35:38 by fdcurot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j] && i
			+ j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
STRNSTR(3) (simplified)

NAME
    strnstr -- locate a substring in a string
SYNOPSIS
    char *strnstr(const char *haystack, const char *needle, size_t len);
DESCRIPTION
    The strnstr() function locates the first occurence of the 
	null-terminated string needle in the string haystack, 
	where not more than len characters are searched.
    Characters that appear after a '\0' character are not searched.
RETURN VALUES
    If needle is an empty string, haystack is returned; if needle 
	occurs nowhere in haystack, NULL is returned; otherwise a pointer 
	to the first character of the first occurence of needle is returned.
	*/