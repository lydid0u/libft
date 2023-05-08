/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:12:26 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/06 16:13:51 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main(){
	struct s_node **lst;
	struct s_node *first = malloc(sizeof(t_node));
	struct s_node *new = malloc(sizeof(t_node));
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