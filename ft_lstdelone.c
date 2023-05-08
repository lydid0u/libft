/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:44:15 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/06 20:56:31 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

#include <stdlib.h>
#include "libft.h"

int main(void)
{
	t_list *lst;
	t_list *new_elem;

	// create a new list
	lst = ft_lstnew("element 1");

	// add a new element to the end of the list
	new_elem = ft_lstnew("element 2");
	ft_lstadd_back(&lst, new_elem);

	// print the list before deleting an element
	ft_lstiter(lst, &print_elem);
	printf("List size: %d\n", ft_lstsize(lst));

	// delete the first element of the list
	ft_lstdelone(lst, &free_elem);

	// print the list after deleting an element
	ft_lstiter(lst, &print_elem);
	printf("List size: %d\n", ft_lstsize(lst));

	// free the memory used by the list
	ft_lstclear(&lst, &free_elem);

	return (0);
}
