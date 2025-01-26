/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:31:57 by marvin            #+#    #+#             */
/*   Updated: 2025/01/26 14:31:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	char	*trimmedstr;
	size_t	end;

	begin = 0;
	if (!s1)
		return (NULL);
	end = (size_t)ft_strlen(s1);
	if (!set || set[0] == '\0')
		return (ft_strdup(s1));
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	while (begin < end && ft_strchr(set, s1[end - 1]))
		end--;
	trimmedstr = (char *)malloc((end - begin + 1) * sizeof(char));
	if (!trimmedstr)
		return (NULL);
	ft_memcpy(trimmedstr, &s1[begin], end - begin);
	trimmedstr[end - begin] = '\0';
	return (trimmedstr);
}
