/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:33:18 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 13:33:18 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
- compare les n premiers octets des zones mémoire s1 et s2.
- renvoie un entier >, = ou < à 0 si s1 est >, = ou < à s2.
- on cast en char pour traiter les donnees a la suite 
- "n - 1" pour comparer sur les n premiers octet 
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	unsigned int		j;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && str1[i] == str2[j])
	{
		i++;
		j++;
	}
	return (str1[i] - str2[j]);
}

//int main()
//{
//	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
//	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
//
//}