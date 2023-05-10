/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:27:40 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/03 18:27:40 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
- examine les n 1er octets de la zone memoire pointe par s a la 
	recherche du char c 
- ca renvoie un ptr sur l'octet correspondant
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *) &str[i]);
		}
		i++;
	}
	return (0);
}

//int main() {
//	printf("%p\n", memchr("wshd", 'd', 4));  
//	printf("%p\n", ft_memchr("wshd", 'd', 4));  
//	return 0;
//}
