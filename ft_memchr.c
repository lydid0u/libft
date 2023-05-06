//#include <stdio.h>
//#include <string.h>
#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    
    const unsigned char *str = (const unsigned char *) s;
    
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
        {
            return (void *) &str[i];
        }
        i++;
    }
    return (0);   
}

//int main() {
//    printf("%p\n", memchr("wshd", 'd', 4));  
//    printf("%p\n", ft_memchr("wshd", 'd', 4));  
//    return 0;
//}
