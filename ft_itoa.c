/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:27:40 by marvin            #+#    #+#             */
/*   Updated: 2025/01/27 20:27:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static int	charcounter(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static long	handlenegative(char *s, long n)
{
	n *= -1;
	s[0] = '-';
	return (n);
}

char	*ft_itoa(int n)
{
	int		slen;
	long	num;
	char	*s;

	num = (long)n;
	if (n == 0)
		return (ft_strdup("0"));
	slen = charcounter(n);
	s = (char *)malloc((slen + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
		num = handlenegative(s, num);
	s[slen] = '\0';
	while (num != 0)
	{
		s[slen - 1] = num % 10 + 48;
		num /= 10;
		slen --;
	}
	return (s);
}
