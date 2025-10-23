/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorg <gorg@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:34:46 by gorg              #+#    #+#             */
/*   Updated: 2024/05/05 19:35:30 by gorg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	if (!dst && !src)
		return (0);
	pdst = (char *)dst;
	psrc = (const char *)src;
	while (n > 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
		n--;
	}
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1);
	dest = malloc(len + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, s1, len + 1);
	return (dest);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);
	if (dstsize > 0)
	{
		while (*src != '\0' && dstsize-- > 1)
		{
			*dst++ = *src++;
		}
	}
	*dst = 0;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*pp;
	size_t	n;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	n = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = malloc(sizeof(char) * n);
	if (!p)
		return (NULL);
	pp = p;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (pp);
}
