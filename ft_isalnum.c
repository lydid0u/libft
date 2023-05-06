#include <stdio.h>
#include <ctype.h>
#include "includes/libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}

/*int main()
{
    int myInt = (int)'f';
    printf("%d\n", ft_isalnum((int) myInt));
    printf("%d", isalnum((int) myInt));
}*/


