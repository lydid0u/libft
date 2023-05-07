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
/*
- copie la zone de memoire depuis src vers dest, les zones peuvent se chevaucher
- if (src < dest) gere les cas où les ZM src et dest se chevauchent : 
	en copiant les octets a l'envers pour éviter d'écraser des données,
- else, copie normal quand les zones se chevauchent pas
*/

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
