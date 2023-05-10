/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:15:34 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 14:15:34 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- strtrim retire tout les char set du debut et de la fin de la str

s1: La chaîne de caractères à trimmer.
set: Le set de référence de caractères à trimmer

- la fonction ft_ischarinset sert a parcourir la str "set" et la compare a c
	et savoir si set contient le char c ou pas et renvoie 1 ou 0

exemple : ft_strtrim ("   test   ", " ") --> "test"

- apres le 1e while, start pointe sur le t, on a passe tout les " " 
- avec le 2e while, on passe tout les " " en decrementant avec end

- on utilise substr pour renvoyer la chaine entre les deux en faisant 
start - end pour sup les " " de fin (start est deja a la bonne position)
*/

#include "libft.h"

int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ischarinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_len(s1) - 1;
	while (end > start && ft_strchr(set, *end))
		end--;
	return (ft_substr(start, 0, end - start + 1));
}

/*int main()
{
	char const a[] = "   te st   ";
	char const b[] = " ";

	printf("'%s'\n", ft_strtrim(a, b));
}*/