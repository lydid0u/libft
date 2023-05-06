#include <stdio.h>
#include <ctype.h>
#include "includes/libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return (c);
}

/*int main()
{
    unsigned char a = 'Q';

    printf("%d", ft_toupper(a));
    printf("%d", toupper(a));

}*/