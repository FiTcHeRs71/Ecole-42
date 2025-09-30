/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:10:59 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:10:59 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if  (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}


/*Return True if all characters in the string are ASCII, False otherwise.*/