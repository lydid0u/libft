//#include <ctype.h>
//#include <stdio.h>
#include "includes/libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else 
        return (0);
}

/*int main()
{
    unsigned char myChar = '\xFF';
    printf("%d\n", ft_isascii((int) myChar));
    printf("%d", isascii((int) myChar));
}*/