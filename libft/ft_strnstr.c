/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:46 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:46 by Frederic Du      ###   ########.fr       */
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
		while (haystack[i + j] && needle[j] 
			&& haystack[i + j] == needle[j]
			&& i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}


/*int main (void)
{
	char	*str = "dfsqfvgsqcapsdcsdqc";
	char	*needle = "capi";
	size_t len = 13;

	char *finder;

	finder = ft_strnstr(str, needle, len);
	printf("%s", finder);
}*/

/*La fonction strnstr() localise la première occurrence de la chaîne terminée par un caractère nul (needle) dans la chaîne haystack, 
en recherchant au maximum len caractères.
Les caractères situés après un '\0' ne sont pas pris en compte dans la recherche.*/