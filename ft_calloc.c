/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:15:51 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/07 18:15:51 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

//pareil que bzero, alloue un bloc de memoire et assigne chq octet a 0

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	nmemb_size;
	size_t	i;

	nmemb_size = nmemb * size;
	i = 0;
	if (nmemb_size == 0)
		return (malloc(1));
	if (nmemb == 0 || size == 0 || nmemb != nmemb_size / size)
		return (NULL);
	ptr = malloc(nmemb_size);
	if (!ptr)
		return (NULL);
	while (nmemb_size > i)
		ptr[i++] = 0;
	return (ptr);
}
