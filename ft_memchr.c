/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:06:27 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 21:06:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memchr(const void *str, int chr, size_t n)
{
    const unsigned char *str1;
    size_t i;

    str1 = (const unsigned char *)str;
    i = 0;
    while (i < n)
    {
        if (str1[i] == (unsigned char)chr)
            return ((void *)&str1[i]);
        i++;
    }
    return (NULL);
}