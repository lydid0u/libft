/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_bzero.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lboudjel <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/03 17:52:15 by lboudjel		  #+#	#+#			 */
/*   Updated: 2023/05/03 17:52:15 by lboudjel		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

/*met à 0 les n premiers octets du bloc de memoire pointé par s, 
n = taille du bloc en octet
on cast pour pouvoir iterer sur chq octet individ et donner la valeur de 0*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
