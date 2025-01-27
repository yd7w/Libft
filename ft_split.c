/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 23:27:29 by marvin            #+#    #+#             */
/*   Updated: 2025/01/26 23:27:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static void	addwords(char **splitted, char const *s, char c, size_t strnum)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	j = 0;
	while (s[i] && j < strnum)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			splitted[j][k++] = s[i++];
		if (k > 0)
		{
			splitted[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	splitted[strnum] = NULL;
}

static void	freeallocation(char **splitted, size_t strnum)
{
	size_t	i;

	i = 0;
	while (i < strnum)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
}

static int	allocatestrs(char **splitted, char const *s, char c, size_t strnum)
{
	size_t	i;
	size_t	j;
	size_t	wordlen;

	i = 0;
	j = 0;
	while (s[i] && j < strnum)
	{
		while (s[i] == c)
			i++;
		wordlen = 0;
		while (s[i + wordlen] && s[i + wordlen] != c)
			wordlen++;
		if (wordlen > 0)
		{
			splitted[j] = (char *)malloc((wordlen + 1) * sizeof(char));
			if (!splitted[j])
				return (0);
			j++;
			i += wordlen;
		}
	}
	return (1);
}

static size_t	countstrs(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	strnum;
	char	**splitted;

	if (!s)
		return (NULL);
	strnum = countstrs(s, c);
	splitted = (char **)malloc((strnum + 1) * sizeof(char *));
	if (!splitted)
	{
		freeallocation(splitted, strnum);
		return (NULL);
	}
	if (allocatestrs(splitted, s, c, strnum) == 0)
	{
		freeallocation(splitted, strnum);
		return (NULL);
	}
	addwords(splitted, s, c, strnum);
	return (splitted);
}
