/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:34:28 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 17:34:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t i;
    size_t srcleng;

    i = 0;
    srcleng = ft_strlen(src);
    while (dstsize > 0 && (i < dstsize - 1) && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (dstsize > 0)
        dest[i] = '\0';
    return (srcleng);
}