#include "includes/libft.h"

static unsigned int ft_len(const char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char	*str;

	if(s == NULL)
		return NULL;

	if (start >= ft_len(s))
	{
		str = malloc(sizeof(char));

		if (str == NULL)
			return (NULL);
			
		str[0] = '\0';
		return (str);
	}

	str = malloc((len + 1) * sizeof(char));

	if(str == NULL)
		return NULL;

	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';

	return (str);

	free(str);
}

//int main()
//{
//	char *str = "01234";
//	size_t size = 10;
//	char *ret = ft_substr(str, 10, size);
//
//	printf("%s", ret);
//
//
//}