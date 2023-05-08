/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:12:26 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/08 20:39:57 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(){
	struct s_node **lst;
	struct s_node *first = malloc(sizeof(t_list));
	struct s_node *new = malloc(sizeof(t_list));
	lst = &first;
	first->content = 5;
	new->content = 1;
	// printf("%d", first->content);
	// printf("%d", new->content);

   printf("%d", (*lst)->content);
	ft_lstadd_front(lst, new);
   printf("%d", (*lst)->content);
   printf("%d", (*lst)->next->content);
}*/