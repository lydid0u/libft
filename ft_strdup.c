#include "includes/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;
    int     len;

    i = 0;
    len = ft_strlen(src);
    dest = malloc(sizeof(char) * len + 1);
    
    if (!dest)
        return (NULL);

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

//int main()
//{
//    char a[] = ".";
//
//    printf("ma fonction %s\n", ft_strdup(a));
//    printf("la fonction %s\n", strdup(a));
//}