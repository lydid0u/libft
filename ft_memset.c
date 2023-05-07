/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memset.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lboudjel <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/03 19:08:53 by lboudjel		  #+#	#+#			 */
/*   Updated: 2023/05/03 19:08:53 by lboudjel		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "includes/libft.h"

//Remplir une zone mémoire avec un octet donné
//s = ptr vers le début de la zone mémoire à remplir.
//c = valeur avec laquelle remplir
//n = taille de la zone mémoire à remplir en octets.

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	valeur;

	i = 0;
	p = ptr;
	valeur = (int) c;
	while (n > 0)
	{
		p[i] = valeur;
		i++;
		n--;
	}
	return (ptr);
}

//int main() 
//{
//	int arr[10];
//	printf("%p\n", memset(arr, 4, sizeof(arr)));
//	printf("%p", ft_memset(arr, 4, sizeof(arr)));
//
//	return (0);
//}