/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:36:10 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 17:36:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *dest1;
    const char *src1;
    char temp[n];
    size_t i;

    i = 0;
    dest1 = (char *)dest;
    src1 = (const char *)src;

    if ((dest1 == NULL && src1 == NULL) || n == 0)
        return NULL;
    ft_memcpy(temp, src1, n);
    ft_memcpy(dest1, temp, n);
    return (dest);
}