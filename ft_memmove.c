#include "includes/libft.h"

void *ft_memmove(void *destination, const void *source, size_t n)
{
	 if (destination == NULL && source == NULL)
        return (0);
		
	unsigned char *dest = (unsigned char *) destination;
    const unsigned char *src = (const unsigned char *) source;
	size_t i;
	
	i = 0;
	
	if (src < dest)
	{
		while (n--)
		{
			dest[n] = src[n];
		}
	}
	else
	{
		 while(n > i)
        {
            dest[i] = src[i];
            i++;
        }
	}
	return (dest);
}