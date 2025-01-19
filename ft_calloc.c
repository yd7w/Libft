/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:54:37 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 14:54:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void    *ft_calloc(size_t n, size_t nsize)
{
    void *p;

    if (n != 0 && (nsize > (SIZE_MAX / n)))
        return (NULL);
    p = (void*)malloc(n * nsize);
    if (!p)
        return (NULL);
    ft_memset(p, 0, (n*nsize));
    return (p);
}