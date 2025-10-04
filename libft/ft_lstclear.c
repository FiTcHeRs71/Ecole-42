
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst,del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}

/*
FT_LSTCLEAR (simplified)

NAME
    ft_lstclear -- removes the element passed as parameter and all the following elements
SYNOPSIS
    void ft_lstclear(t_list **lst, void (*del)(void *));
DESCRIPTION
    Deletes and free the memory of the element passed as parameter and all the following elements using 'del' and free(3). Finally, the initial pointer must be set to NULL.
PARAMETERS
    lst: pointer address to one element
    del: address of the function that can delete the element's content
RETURN VALUES
    None
AUTHORIZED EXTERNAL FUNCTIONS
    free(3)
	*/