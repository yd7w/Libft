/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:48:25 by marvin            #+#    #+#             */
/*   Updated: 2025/01/16 17:48:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strnstr(const char *str, const char *needle, size_t n)
{
    size_t i;
    size_t j;
    size_t needleleng;

    i = 0;
    needleleng = ft_strlen(needle);
    if ((!str && n > 0) || n == 0)
        return (NULL);
    if (needle[0] == '\0')
        return ((char *)str);
    if (n < needleleng)
        return (NULL);
    while (str[i] != '\0' && i < n)
    {
        j = 0;
        if (str[i] == needle[0])
        {
            while(str[i + j] == needle[j] && (i + j) < n)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&str[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}