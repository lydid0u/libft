#include "includes/libft.h"
#include <string.h>

unsigned int	ft_len(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
		i++;
	}

	return(i);

}

char *ft_strnstr(char *str, char *to_find, size_t n) 
{
    size_t to_find_len;
    const char *end;
	
     if (to_find == NULL || str == NULL) {
        if (n == 0)
            return str;
    }

    if (*to_find == '\0') 
        return str;

    if (*str == '\0')
            return NULL;

    to_find_len = ft_len(to_find);

    if (n < ft_len(str)) 
        end = str + n - to_find_len;
    else 
        end = str + ft_len(str) - to_find_len;

    while (str <= end) 
    {
        if (*str == *to_find) 
        {
            size_t i = 1;
            while (i < to_find_len && *(str + i) == *(to_find + i)) 
            {
                i++;
            }
            if (i == to_find_len) 
                return (char*) str; 
        }
        str++;
    }
    return (0);
}