
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
FT_LSTITER (simplified)

NAME
    ft_lstiter -- apply a function to each element's content
SYNOPSIS
    void ft_lstiter(t_list *lst, void (*f)(void *));
DESCRIPTION
    Iterate over the list 'lst' and apply the function 'f' to the content of all elements.
PARAMETERS
    lst: pointer address to one element
    f: function to apply
RETURN VALUES
    None
AUTHORIZED EXTERNAL FUNCTIONS
    None
	*/