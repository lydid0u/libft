#include <stdlib.h>
#include <stdio.h>

static int ft_len(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

int ft_ischarinset(char c, char const *set)
{
    int i = 0;
    while (set[i])
    {
        if (c == set[i])
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int len;
    int start;
    int end;
    
    if (s1 == NULL || set == NULL)
            return NULL;

    len = ft_len(s1);
    start = 0;
    end = len - 1;
    
    while (ft_ischarinset(s1[start], set))
        start++;

    if (start == len)
    {
        char *str = malloc(1);
        if (str == NULL)
            return NULL;

        str[0] = '\0';
        return str;
    }

    while (ft_ischarinset(s1[end], set))
        end--;

    char *str;
    str = malloc(end - start + 2);
    
    if (str == NULL)
        return NULL;

    int i;
    int j;
    
    i = start;
    j = 0;
    
    while (i <= end)
        str[j++] = s1[i++];
    str[j] = '\0';

    return str;
}

//int main()
//{
//    char const a[] = "   test   ";
//    char const b[] = " ";
//
//    printf("'%s'\n", ft_strtrim(a, b));
//}
//