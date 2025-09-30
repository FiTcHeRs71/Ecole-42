/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:34 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:34 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len +1 < dstsize)
	{
		ft_memcpy(dst, src, src_len + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize -1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}

/*What this function does is pretty simple in that it's made to copy one string to another but with a small catch, it always NUL-terminate the string.

If you give a dstsize long enough to NUL-terminate the string without truncating it, strlcpy() will simply copy the string, as you'd do with strcpy(). 
If you don't give a dstsize long enough, it will copy dstsize - 1 characters from the source into the destination, adding the NUL-terminating character after that.

The strlcpy() function always returns the length of the string that it tried to create, this is the length of src, 
even if you have to truncate the string to NUL-terminate it.*/