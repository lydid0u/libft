#include "includes/libft.h"

t_list *ft_lstnew(void *content)
{
    t_list    *new;

    new = malloc(sizeof(t_list)); //calcule la taille d'un nv maillon de la chaine

    if (new == NULL)
        return (NULL);

    new->content = content;
    new->next = NULL;
    
    return (new);
}
