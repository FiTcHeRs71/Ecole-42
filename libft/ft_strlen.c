/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:39 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:39 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}


/*The strlen() function returns the number of characters before the terminating NUL (\0) character of the string.*/