#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char    *ptr;
    size_t nmemb_size = nmemb * size;
    size_t  i;

    i = 0;

    if (nmemb_size == 0) // Vérifier si la taille totale est de 0
      return malloc(1); // Allouer un octet de mémoire et renvoyer un pointeur valide


    if (nmemb == 0 || size == 0 || nmemb != nmemb_size / size)
        return (NULL);

    ptr = malloc(nmemb_size);

    if (!ptr)
        return (NULL);

    while (nmemb_size > i)
        ptr[i++] = 0;

    return (ptr);
}
