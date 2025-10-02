/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:54:25 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/10/02 15:12:42 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while(s[i])
	{
		(*f)(i,&s[i]);
		i++;
	}
}

/*void	ft_putstr(unsigned int i, char *c)
{
	(void) i;
	write(1, c, 1);
}

int	main(void)
{
	char	*str = "abcdefghijklmnopqrstuvwxyz";

	ft_striteri(str, ft_putstr);
	return (0);
}*/