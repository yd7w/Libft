/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:33:56 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 18:33:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t i;
    size_t j;
    size_t totalleng;

    totalleng = ft_strlen(src) + ft_strlen(dest);
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    if (destsize == 0)
        return (ft_strlen(src));
    if (destsize <= i)
        return (destsize + ft_strlen(src));
    if (destsize != 0)
    {
        while (i < destsize - 1 && src[j] != '\0')
        {
            dest[i] = src[j];
            j++;
            i++;
        }
        dest[i] = '\0';
    }
    return (totalleng);
}