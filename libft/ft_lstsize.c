#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst -> next;
	}
	return(size);
}

/*int	main(void)
{
	char str[] = "KCORP";
	size_t	i;
	t_list *node = ft_lstnew(str);

	i = 0;
	printf("La premiere node actuel est:\n");
	while (((char *)node->content)[i])
	{
		write(1, &((char *)node->content)[i], 1);
		i++;
	}
	write(1,"\n",1);

	char str2[] = "ON FIRE !!!";

	t_list *node2 = ft_lstnew(str2);

	ft_lstadd_back(&node, node2);

	i = 0;

	printf("suite a ft_lstadd_back, la premiere node est:\n");
	while (((char *)node->content)[i])
	{
		write(1, &((char *)node->content)[i], 1);
		i++;
	}
	write(1,"\n",1);

	i = 0;

	printf("et la deuxieme node est:\n");
	while (((char *)node->next->content)[i])
	{
		write(1, &((char *)node->next->content)[i], 1);
		i++;
	}
	write(1,"\n",1); 

	int	len;

	len = ft_lstsize(node);

	printf("la size est de %d\n",len);

	free(node);


	return (0);
}*/
/*
FT_LSTSIZE (simplified)

NAME
    ft_lstsize -- returns the number of element in the list
SYNOPSIS
    int *ft_lstsize(t_list *lst);
DESCRIPTION
    Count the number of elements of the list
PARAMETERS
    lst: start of the list
RETURN VALUES
    The size of the list
AUTHORIZED EXTERNAL FUNCTIONS
    None
	*/