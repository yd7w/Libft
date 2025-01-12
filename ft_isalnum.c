#include "Libft.h"

int ft_isalnum(int a)
{
    if((a >= 65 && a <= 90)||(a >= 97 && a <= 122)||(a <= 57 && a >= 48))
        return 1;
    else
        return 0;
}