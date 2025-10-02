/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Frederic Ducrot <fducrot@student.42laus    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:03:36 by Frederic Du       #+#    #+#             */
/*   Updated: 2025/10/02 14:26:32 by Frederic Du      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd,"\n",1);
}

/*int	main(void)
{
	int	fd;
	char	*c;
	
	fd = open("test.txt", O_WRONLY);
	c = "KCORP ON FIRE";
	if (fd == -1) 
	{
    	perror("Erreur d'ouverture");
    	return 1;
	}
	ft_putendl_fd(c,fd);
	close (fd);
	return(0);
}*/

/*
FT_PUTENDL_FD (simplified)

NAME
    ft_putendl_fd -- write a string on a specified file descriptor, follow by a newline
SYNOPSIS
    void ft_putendl_fd(char *s, int fd);
DESCRIPTION
    ft_putendl_fd() writes the string s, followed by a newline, on the file descriptor fd
PARAMETERS
    s: string to write
    fd: the file descriptor on which to write
RETURN VALUES
    ft_putendl_fd() does not return anything
AUTHORIZED EXTERNAL FUNCTIONS
    write(2)
    */