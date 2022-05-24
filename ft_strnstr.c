/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:46:04 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/18 10:55:33 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)str);
	while ((str[i] != 0) && ((i + needle_len) <= len))
	{
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	while ((haystack[i] != 0) && ((i + needle_len) <= len))
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (*h && i < len)
	{
		j = 0;
		while (i + j < len && h[i + j] == n[j] && n[j] != '\0')
			j++;
		if (n[j] == '\0')
			return ((char *)h + i);
		i++;
	}
	return (NULL);
}
*/