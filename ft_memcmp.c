#include "includes/libft.h"
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1 = (const unsigned char *) s1;
    const unsigned char *str2 = (const unsigned char *) s2;

    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    if (n == 0)
        return (0);
    while (i < (n - 1) && str1[i] == str2[j])
    {
        i++;
        j++;
    }
    return (str1[i] - str2[j]);
}

//int main()
//{
//    printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
//    printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
//
//}