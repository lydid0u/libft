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

la fonction ft_ischarinset sert a ......
*/

#include "includes/libft.h"

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