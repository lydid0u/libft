/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:20:59 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 14:20:59 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
- cree une sous chaine a partir d'une str 
	en commencant a l'index start et de taille len
- exemple : ("Bonjour tout le monde", 3, 5) --> "jour "
*/
#include "includes/libft.h"

static unsigned int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start >= ft_len(s))
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc((len + 1) * sizeof(char));
	if (s == NULL || str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
}
