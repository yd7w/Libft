/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:07:05 by marvin            #+#    #+#             */
/*   Updated: 2025/01/20 18:07:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *newstr;
    size_t newstrlen;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (ft_strdup(s2));
    if (!s2)
        return (ft_strdup(s1));
    newstrlen = ft_strlen(s1) + ft_strlen(s2) + 1;
    newstr = (char *)malloc(newstrlen * sizeof(char));
    if (!newstr)
        return (NULL);
    ft_strlcpy(newstr, s1, newstrlen);
    ft_strlcat(newstr, s2, newstrlen);    
    return (newstr);
}