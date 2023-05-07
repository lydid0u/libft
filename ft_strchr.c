/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzinabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:50:10 by adzinabi          #+#    #+#             */
/*   Updated: 2023/05/04 13:50:10 by adzinabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

//int main()
//{
//	char str[] = "tripouille";
//
//	printf("%p\n", ft_strchr(str, 't' + 256));
//	printf("%p\n", strchr(str, 't' + 256));
//
//	 printf("%p\n", ft_strchr(str, 't'));
//	printf("%p\n", strchr(str, 't'));
//}