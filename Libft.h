/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:37:09 by marvin            #+#    #+#             */
/*   Updated: 2025/01/15 17:37:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *s1, int c, size_t n);
int ft_isalnum(int a);
int ft_isalpha(int a);
int ft_isascii(int a);
int ft_isdigit(int a);
int ft_isprint(int a);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *str1, const char *str2, size_t m);
int ft_tolower(int a);
int ft_toupper(int c);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t ft_strlcat(char *dest, const char *src, size_t destsize);
size_t ft_strlcat(char *dest, const char *src, size_t destsize);
char* ft_strrchr(char* str, int chr);
void *ft_memchr(const void *str, int chr, size_t n);