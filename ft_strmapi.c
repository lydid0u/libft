#include "includes/libft.h"

static int ft_len(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len = ft_len(s);
    char* str = (char*) malloc(len + 1);
    unsigned int i;

    i = 0;

    if (!s || !f || !str)
        return (NULL);

    while (s[i]) 
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}
