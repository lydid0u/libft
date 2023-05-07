/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:00:38 by lboudjel          #+#    #+#             */
/*   Updated: 2023/05/04 14:00:38 by lboudjel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères transmise comme argument,
et en passant son index comme premier argument.
- Chaque caractère est transmis par adresse à ’f’
afin d’être modifié si nécessaire.

s: La chaîne de caractères sur laquelle itérer.
f: La fonction à appliquer à chaque caractère.

s + i = adresse de la i-ème case mémoire de la chaîne s
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
