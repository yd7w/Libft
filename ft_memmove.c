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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (const unsigned char *)src;
	if (dest1 == src1 || n == 0)
		return (NULL);
	if (dest1 < src1)
		ft_memcpy(dest1, src1, n);
	else
	{
		while (i < n)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
	}
	return (dest);
}
