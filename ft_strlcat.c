/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:30:30 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/03 18:30:30 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
- concatene src a la fin de dest avec une taille max de size
- Si size < dest : renvoie la longueur de src + size. 
- Si size >= dest : concatène src à la fin de dest 
	(verifie que longueur depasse pas size -1)
- i + j pcq on met i a la len de dest et on ajoute avec le j a la suite
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	i = ft_strlen(dest);
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
	{
		if (dest[0] == '\0')
		{
			while (src[j])
				j++;
			return (j);
		}
		else
			return (ft_strlen(src));
	}
	while (dest[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}*/

/*int main()

{
	 char a[] = "B";
	 char b[] = "AAAAAAAAA";
	 int n = 0;
	 printf("%d\n", ft_strlcat(a, b, n));
	 	 return 0;

}*/