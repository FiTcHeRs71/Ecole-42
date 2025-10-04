
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	char str[] = "ON FIRE";
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

	char str2[] = "KCORP";

	t_list *node2 = ft_lstnew(str2);

	ft_lstadd_front(&node, node2);

	i = 0;

	printf("suite a ft_lstadd_front, la premiere node est:\n");
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

	free(node);


	//printf("%s", (char *)node->next->content);
}*/

/*
FT_LSTADD_FRONT (simplified)

NAME
    ft_lstadd_front -- Adds a new element at the front of the list
SYNOPSIS
    void ft_lstadd_front(t_list **lst, t_list *new);
DESCRIPTION
    Add the 'new' element at the front of the list
PARAMETERS
    lst: pointer address to the first element of the list
    new: pointer address of the new element to add to the list
RETURN VALUES
    None
AUTHORIZED EXTERNAL FUNCTIONS
    None
	*/