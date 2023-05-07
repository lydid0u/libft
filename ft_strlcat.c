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
#include "includes/libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	if (!dest || !src || size == 0)
		return (ft_strlen((char *)src));
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