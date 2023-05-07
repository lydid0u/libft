/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:40:30 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 13:40:30 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>
/*
- copie n octets depuis la zone mémoire src vers la zone mémoire dest.
- Les deux zones ne doivent pas se chevaucher.
*/
void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	if (destination == NULL && source == NULL)
		return (0);
	src = (const unsigned char *) source;
	dest = (unsigned char *) destination;
	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
