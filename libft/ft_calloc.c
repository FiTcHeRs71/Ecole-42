/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:10:47 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:10:47 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;

	if (count <= 0 || size <= 0)
	{
		return malloc(1); 
	}
	if(count > SIZE_MAX / size)
	{
		return (NULL);
	}
	temp = malloc(count * size);
	if (!temp)
	{
		return (NULL);
	}
	ft_memset(temp, 0, count * size);
	return (temp);
}

/*int main(void)
{

 ft_calloc(-5, -5);

}*/

/*calloc() works in the same way as malloc() does, but the difference is that calloc() sets all the memory bytes are set to 0,
 instead of staying as the gibberish that was there in memory before we allocated it.*/