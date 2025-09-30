/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:06 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:06 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
	else
	{
   		return (0);
	}
}

/* The isprint() function tests for any printing character, including space. 
The value of the argument must representable as an unsigned char or the value of EOF.*/