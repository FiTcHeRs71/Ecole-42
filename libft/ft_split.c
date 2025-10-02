/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 09:20:28 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/10/02 15:34:12 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_counter_of_sep(char const *s, char c)
{
	size_t	count;
	
	while (*s++)
	{
		if(*s == c)
		{
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**array_of_string;
	size_t		count;
	size_t		y;
	size_t		len;
	unsigned int	start;

	y = 0;
	start = 0;
	count = ft_counter_of_sep(s,c);
	array_of_string = ft_calloc(count + 1, sizeof(char));
	count = 0;
	while(s[count] != '\0')
	{
		len = 0;
		while(s[count] != c && s[count] != '\0')
		{
			len++;
			count++;
		}
		array_of_string[y] = ft_substr(s, start,len);
		y++;
		start = start + len + 1;
		count++;
	}
	return (array_of_string);
}

int	main(void)
{
	char	*str = "  tripouille  42  ";
	char	c = ' ';
	char	**retour;
	retour= ft_split(str,c);
	for (int i = 0; i < 3; i++) 
	{
		printf("%s\n", retour[i]);
	}
	return (0);
}