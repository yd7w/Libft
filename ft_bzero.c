#include "Libft.h"

void ft_bzero(void *s, size_t n)
{
    char *str;
    size_t i;

    i = 0;
    str = s;
    while(i < n)
        str[i++] = '\0';
}