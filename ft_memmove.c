/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:49:53 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/03 19:49:53 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *destina, const void *source, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	if (destina == NULL && source == NULL)
		return (0);
	i = 0;
	dest = (unsigned char *) destina;
	src = (const unsigned char *) source;
	if (src < dest)
	{
		while (n--)
		{
			dest[n] = src[n];
		}
	}
	else
	{
		while (n > i)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
