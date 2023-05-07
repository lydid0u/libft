/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:02:06 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 14:02:06 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- copie jusqua n-1 caractere de src dans dest et renvoie la longueur de src
*/

#include "includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (n - 1 > i && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
