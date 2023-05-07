/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:50:10 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 13:50:10 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "includes/libft.h"

//cast pour garantir que la comparaison se fait bien sur des valeurs non signe

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