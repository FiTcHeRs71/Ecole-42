/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:26:55 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 16:04:30 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (end > start && ft_strrchr(set, s1[end]))
	{
		end--;
	}
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

int	main(void)
{
	char *s1 = "ababaaaMy name is Simonbbaaabba";
	char *set = "ab";
	char *retour;
	
	retour = ft_strtrim(s1,set);
	
	printf("%s\n", retour);
	return (0);
	
}

/*The ft_strtrim() function takes a string and trims it.

What does trimming mean you might ask ? Let me explain.

Trimming means removing the characters specified in the set string from the 
start AND the end of the string s1, without removing the characters from the
set that are in the middle of s1.

If we have the string ababaaaMy name is Simonbbaaabbad and our set is ab,
 we'll get this result out of the ft_strtrim() function : My name is Simon.

We removed every a and b from the start and the end of s1, 
without touching at the a in the middle of s1.*/