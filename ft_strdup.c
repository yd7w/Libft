/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:33:52 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 16:33:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strdup(const char *str)
{
	size_t	strleng;
	size_t	i;
	char	*newstr;

	if (!str)
		return (NULL);
	i = 0;
	strleng = ft_strlen(str);
	newstr = (char *)malloc(strleng + 1);
	if (!newstr)
		return (NULL);
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
