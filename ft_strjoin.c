#include "includes/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	
    j = 0;

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


static int ft_len(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{    
    char *str;
    int len;

    len = ft_len(s1) + ft_len(s2) + 1;
    str = malloc(len);

    if(s1 == NULL || s2 == NULL || str == NULL)
        return (NULL);

    str[0] = '\0';

    str = ft_strcat(str, s1);
    str = ft_strcat(str, s2);

     return (str);
}

//int main()
//{
//    char a[] = "1113";
//    char b[] = "saluhbgvd";
//
//    printf("%s\n", ft_strjoin(a, b));
//
//}