/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:35:07 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 21:35:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (const unsigned char*)s1;
    str2 = (const unsigned char*)s2;
    i = 0;
    if (!n)
        return (0);
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}