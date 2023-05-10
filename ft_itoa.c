/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:24:19 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/03 18:24:19 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
- count len :
	on le met en long comme ca 2147483648 rentrera 
	on compte la taille de n

- itoa : 
	on commence a copier de la droite d'ou len-- et le %
	le + '0' c'est pour convertir en caractere ascii
*/

#include "libft.h"

static int	count_len(long int n)
{	
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	long int	n;
	int			len;
	char		*str;

	n = nb;
	len = count_len(n);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len = len -1;
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
// int main()
// {
//    int a = -2147483648;
//    printf("%s\n", ft_itoa(a));
//    printf("%s\n", ft_itoa(123));
//    printf("%s\n", ft_itoa(-123));
//    printf("%s\n", ft_itoa(0));
//    printf("%s\n", ft_itoa(3434534));
//    printf("%s\n", ft_itoa(-454));
//    printf("%s\n", ft_itoa(43343));
//    ft_itoa(-214740648);
//    // DANS LE CAS 654
//    len = 3
//    jfais un malloc de 3 + 1
//    str[len] = '\0' c pareil que str[3]
// 	len - 1; (len =2)
// 	str[len] = 4 soit le dernier caratere 
// 	len -1;(len =1)
// 	str[len] = 5
// 	len -1;(len =0)
// 	str[len] = 6
//    */
//      // DANS LE CAS -654
//    /*
//    len = 4
//    jfais un malloc de len + 1
//    str[len] = '\0' c pareil que str[4]
//    //str[0] = '-'
// 	len - 1; (len =3)
// 	str[len] = 4 soit le dernier caratere 
// 	len -1;(len =2)
// 	str[len] = 5
// 	len -1;(len =1)
// 	str[len] = 6

// 	du coup tarrete la copie a str[1]
//    */
// }