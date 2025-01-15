/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:13:27 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 20:13:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char* ft_strrchr(char* str, int chr)
{
    int strleng;

    strleng = ft_strlen(str);
    while (strleng >= 0)
    {
        if (str[strleng] == (char)chr)
            return (&str[strleng]);
        strleng--;
    }
    return (0);
}