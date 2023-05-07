/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strncmp.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lboudjel <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/03 18:59:09 by lboudjel		  #+#	#+#			 */
/*   Updated: 2023/05/03 18:59:09 by lboudjel		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (i < (n) && s1[i] == s2[j] && s1[i])
	{
		i++;
		j++;
	}
	if (i == n || (s1[i] == '\0' && s2[j] == '\0'))
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}

//int main()
//{
//	char a[] = "test\200";
//	char b[] = "test\0";
//	int n = 6;
//
//	printf("%d\n", ft_strncmp(a, b, n));
//printf("%d\n", strncmp(a, b, n));
//}