/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:14:42 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/09 14:07:46 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*int main()
{
	char a[] = "	  +++--+-76543ffssf654";
    printf("%d\n", ft_atoi(a));
    printf("%d\n", atoi(a));

     char b[] = "+++--+-76543ffssf654";
    printf("%d\n", ft_atoi(b));
    printf("%d\n", atoi(b));
     char c[] = "     +76543ffssf654";
    printf("%d\n", ft_atoi(c));
    printf("%d\n", atoi(c));
     char d[] = "4";
    printf("%d\n", ft_atoi(d));
    printf("%d\n", atoi(d));
}*/