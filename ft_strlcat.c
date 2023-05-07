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
- Si size >= dest : concatène src à la fin de dest (verifie que longueur depasse pas size -1)
- i + j pcq on met i a la len de dest et on ajoute avec le j a la suite
*/

#include "includes/libft.h"

static size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (size == 0)
		return (ft_len(src));
	if (size < ft_len(dest))
		return (ft_len(src) + size);
	i = ft_len(dest);
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_len(src));
}

/*unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	if (!dest || !src || size == 0)
		return (ft_len((char *)src));
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	while (src[i - dest_len] && i + 1 < size)
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	if (dest_len < size)
		dest[i] = '\0';
	while (src[i - dest_len])
		i++;
	return (i);
}*/

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
			return (ft_len(src));
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