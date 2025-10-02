/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:51:03 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/10/02 14:27:28 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_count_int(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
	{
		count = 1;
		return (count);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		i;
	size_t		len;
	size_t		max;
	long int	nbr;
	char		*result;
	
	i = 0;
	len = ft_count_int(n);
	nbr = n;
	max = len;
	result = ft_calloc(len + 1, sizeof(char));
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
		i++;
	}
	while (len > i)
	{
		len--;
		result[len] = (nbr % 10) + 48;
		nbr /= 10;
	}
	result[max] = '\0';
	return (result);
}


 /*int	main(void)
{
	char	*str;
	int	i;

	i = 0;
	str = ft_itoa(-21474838);

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

}*/