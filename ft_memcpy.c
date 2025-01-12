#include "Libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *dest1;
    const char *src1;
    size_t i;

    i = 0;
    dest1 = dest;
    src1 = src;
    if (!src1 && !dest1)
        return (NULL);
    while (i < n && (src1 != '\0') && (src1 != dest1))
    {
        dest1[i] = src1[i];
        i++;  
    }
    return (dest);
}