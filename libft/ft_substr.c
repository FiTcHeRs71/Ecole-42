/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:09:00 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/10/02 13:27:24 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*str;
	size_t	real_len;
	size_t	i;
	
	i = 0;
	if (!s)
	{
		return (NULL);
	}
	real_len = ft_strlen(s) - start;
	if (real_len > len)
	{
		real_len = len;
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	str = ft_calloc(real_len + 1, sizeof(char));
	while (i < real_len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

/*int	main(void)
{
	char *str = "tripouille";
	char *sub;

	//unsigned int i = 0;
	//si ze_t len = ft_strlen(str);
	
	sub = ft_substr(str, 1, 1);
	printf("%s\n", sub);
	return (0);
}*/

/*Allocate (with malloc(3)) and return a new string from the string s.
This new string starts at index 'start' and has a maximum size of 'len'.*/