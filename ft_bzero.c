#include "includes/libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *str = (unsigned char *) s;
    size_t i;
    i = 0;

    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}