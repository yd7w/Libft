#include <Libft.h>

int ft_strncmp(const char *str1, const char *str2, size_t m)
{
    int i;

    i = 0;
    if (m == 0)
        return (0);
    while (i < m && str1[i]==str2[i] && str1[i] != '\0' && str2[i] != '\0')
        i++;
    return ((unsigned char)str1[i]-(unsigned char)str2[i]);
}