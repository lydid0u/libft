#include <ctype.h>
#include <stdio.h>
#include "includes/libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

//int main()
//{
//    unsigned char myChar = 59;
//    printf("%d\n", ft_isdigit((int) myChar));
//    printf("%d", isdigit((int) myChar));
//}