

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
	{
		return (NULL);
	}
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

/*int main(void)
{
	char *str = "Hello 42!";
	t_list *node = ft_lstnew(str);
	int i;

	i = 0;
	while ((char *)node->content)[i])
	{
		write(1, &((char *)node->content)[i], 1);
		i++;
	}
	write(1,"\n",1);
	printf("%p\n", (void *)node->next);


	free(node);

	int n = 42;
	node = ft_lstnew(&n);


	printf("%d\n", *(int *)node->content);
	printf("%p\n", (void *)node->next);

	free(node);

	return 0;
}*/

/*
FT_LSTNEW (simplified)

NAME
	ft_lstnew -- create a new list node element
SYNOPSIS
	t_list *ft_lstnew(void *content);
DESCRIPTION
	Allocate (with malloc(3)) and return the new element. The member variable
	'content' is initialized with the value of the 'content' parameter.
	The 'next' variable is initialized to NULL.
PARAMETERS
	content: The content of the new element
RETURN VALUES
	The new element.
AUTHORIZED EXTERNAL FUNCTIONS
	malloc(3)
	*/