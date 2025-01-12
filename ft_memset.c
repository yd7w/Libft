#include "Libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    unsigned char *str1;

    i = 0;
    str1 = str;
    while (i < n)
        str1[i++] = c;
    return (str);
}
