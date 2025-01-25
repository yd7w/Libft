/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:36:44 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 17:36:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t m)
{
	size_t	i;

	i = 0;
	if (m == 0)
		return (0);
	while (i < m && str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	if (i == m)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
