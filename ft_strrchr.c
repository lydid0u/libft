#include "includes/libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
   int  i;
   i = 0;
   
   while (s[i])
       i++;

   while(i >= 0)
	{
		if(s[i] == (char)c)
			return (char*)&s[i];
		i--;
	}
        return (0);
}

//int main()
//{
//    char str[] = "tripouille";
//
//    printf("%p\n", ft_strrchr(str, 't' + 256));
//    printf("%p\n", strrchr(str, 't' + 256));
//
//     printf("%p\n", ft_strrchr(str, 't'));
//    printf("%p\n", strrchr(str, 't'));
//}