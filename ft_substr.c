/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:57:27 by marvin            #+#    #+#             */
/*   Updated: 2025/01/19 17:57:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	size_t	newslen;
	char	*news;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((slen - (size_t)start) < len)
		newslen = slen - (size_t)start;
	else
		newslen = len;
	if ((size_t)start >= slen)
		return (ft_strdup(""));
	news = malloc((newslen + 1) * sizeof(char));
	if (!news)
		return (NULL);
	i = 0;
	while (i < newslen)
	{
		news[i] = s[(size_t)start + i];
		i++;
	}
	news[i] = '\0';
	return (news);
}
