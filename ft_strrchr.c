/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:13:28 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 14:13:28 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

//int main()
//{
//	char str[] = "tripouille";
//
//	printf("%p\n", ft_strrchr(str, 't' + 256));
//	printf("%p\n", strrchr(str, 't' + 256));
//
//	 printf("%p\n", ft_strrchr(str, 't'));
//	printf("%p\n", strrchr(str, 't'));
//}