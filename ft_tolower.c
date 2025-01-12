#include <Libft.h>

int ft_tolower(int a)
{
    if (a <= 90 && a >= 65)
        return (a + 32);
    else
        return (a);
}