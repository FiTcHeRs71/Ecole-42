/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:23 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:23 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*tmp;

	tmp = (unsigned char *)b;
	while (len-- > 0)
	{
		*tmp++ = (unsigned char) c;
	}
	return (b);
}	

int		main(int argc, char **argv)
{
	int	c;
	(void)argc;
	(void)argv;

	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	c = 'Z';
	size_t i;

	i = 25;
	printf("%s\n", (char*)ft_memset(str, c, i));
	printf("%s\n", (char*)memset(str, c, i));
}

/*The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.*/