/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:09:00 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 16:04:42 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*str;
	size_t	i;
	
	i = 0;
	if (!s)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	str = ft_calloc(len + 1, sizeof(char));
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return(str);
}
/*int	main(void)
{
	char *str = "Bonjour comment ca va?";
	char *sub;

	//unsigned int i = 0;
	//si ze_t len = ft_strlen(str);
	
	sub = ft_substr(str, 50, 8);
	printf("%s\n", sub);
	return (0);
}*/

/*Allocate (with malloc(3)) and return a new string from the string s.
This new string starts at index 'start' and has a maximum size of 'len'.*/