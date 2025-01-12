#include <Libft.h>

int ft_isdigit(int a)
{
    if (a <= 57 && a >= 48)
        return 1;
    else
        return 0;
}