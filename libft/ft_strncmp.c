/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:42 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:42 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && (n > 0))
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int		main(void)
{
	char *str = "KCORP";
	char *stt = "KCOR";
	int r;

	r = ft_strncmp(str, stt, 30);
	printf("%d", r);
}*/

/*Cette fonction permet de comparer deux chaînes de caractères et de savoir si la première est inférieure, égale ou supérieure à la seconde. 
Cette comparaison sera faite dans l'ordre lexicographique (et donc, en tenant compte des valeurs ASCII des différents caractères comparés). 
Néanmoins la comparaison se fera au maximum sur les length premiers caractères.

En langage C, les chaînes de caractères sont qualifiées d'AZT : A Zéro Terminal. 
Cela signifie qu'une chaîne de caractères se termine forcément par un code ASCII nul (pouvant aussi être représenté par '\0').*/