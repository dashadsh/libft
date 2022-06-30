/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:55:11 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/06/30 11:13:01 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.

Returns the new string.
NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		return (ft_strdup(s + start));
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s + start, len);
	copy[len] = '\0';
	return (copy);
}

/*
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ptr;
	unsigned int	size;

	i = 0;
	ptr = ft_calloc(sizeof(char), len + 1);
	if (!ptr)
	{
		return (NULL);
	}
	size = ft_strlen(s);
	if (start >= size || !s)
	{
		len = 0;
	}
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
*/

/*
#include <stdio.h>

int main()
{	
	char str[12] = "synthesizer";
	printf("\"%s\", after ft_substr - \"%s\"\n", str, ft_substr(str, 3, 3));
	return (0);	
}
*/