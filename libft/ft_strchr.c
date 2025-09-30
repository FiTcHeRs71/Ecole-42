/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:27 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:27 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return((char*)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return((char*)s);
	}
	return (NULL);
}

/*int		main(void)
{
	char *str = "KCORP ON FIRE !!!!";
	int c = 'Z';
	char *finder;
d
	finder = ft_strchr(str, c);
	printf("%s", finder);
}*/

/*Cette fonction recherche la dernière occurrence du caractère passé en 
second paramètre dans la chaîne de caractères spécifiée via le premier paramètre.*/