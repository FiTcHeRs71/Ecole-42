/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:33:55 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 11:43:59 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*dest;
	
	len = ft_strlen(s1);
	i = 0;
	dest = ft_calloc(len, sizeof(char));
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*The strdup() function allocates sufficient memory for a copy of the string s1, 
does the copy, and returns a pointer to it. 
The pointer may subsequently be used as an argument to the function free(3).*/