/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 09:11:02 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/09/30 09:11:02 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}

/*Cette fonction permet de tester si un caractère est un chiffre décimal ou non.*/