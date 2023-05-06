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

#include <string.h>
#include <stdio.h>
#include "includes/libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (0);
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
	{
		j++;
	}
	return (i + j);
}
// int main()
// {
//	 char a[] = "1113";
//	 char b[] = "saluhbgvd";
//	 int n = 14;

//	 printf("%d\n", ft_strlcat(a, b, n));
//	 printf("%d", strlcat(a, b, n));
//	 return 0;
// }