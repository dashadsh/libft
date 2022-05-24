/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:43:31 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 23:37:43 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function allocates (with malloc())) and returns a copy of ’s1’ with the
characters specified in ’set’ removed from the beginning and the end of 
the string */

#include "libft.h"

static size_t	ft_get_start(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{	
		if (ft_strchr(set, str[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

static size_t	ft_get_end(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{	
		if (ft_strchr(set, str[len - i - 1]) == 0)
			return (len - i);
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trimmed = malloc(end - start + 1 * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	return (trimmed);
}

/*
#include <stdio.h>

int main()
{
	char *string = "ABCddddddABC";
	char *del = "ABC";
	char *string2 = "QWERTYqwertyEEEERRRRTTTT";
	char *del2 = "QWERTY";
	
	printf ("%s\n", ft_strtrim(string, del));	
	printf ("%s\n", ft_strtrim(string2, del2));
	return (0);
}
*/