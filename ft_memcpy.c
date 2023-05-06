#include "includes/libft.h"
#include <stdlib.h>

void *ft_memcpy(void *destination, const void *source, size_t n)
{
    if (destination == NULL && source == NULL)
        return (0);

    unsigned char *dest = (unsigned char *) destination;
    const unsigned char *src = (const unsigned char *) source;

    size_t     i;

    i = 0;

        while(n > i)
        {
            dest[i] = src[i];
            i++;
        }

    return (dest);
}

