/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:25:12 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/06/29 23:19:18 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter.  The array must end
with a NULL pointer.
Return - the array of new strings resulting from the split.
NULL if the allocation fails.
*/

#include "libft.h"

size_t	ft_word_counter(const char *s, char c)
{
	size_t	word_counter;

	if (!*s)
		return (0);
	word_counter = 0;
	while (*s)
	{
		if (*s != c && ((*(s + 1)) == c || (*(s + 1)) == '\0'))
			word_counter++;
		s++;
	}
	return (word_counter);
}

size_t	ft_wordlen(const char *s, char c)
{
	size_t	wordlen;

	if (!ft_strchr(s, c))
		wordlen = ft_strlen(s);
	else
		wordlen = ft_strchr(s, c) - s;
	return (wordlen);
}

void	ft_free(char **dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		free(dest[i]);
		i++;
	}
	free(dest);
}

char	*ft_putword(char **array, const char *s, char c, int i)
{
	array[i] = ft_substr(s, 0, ft_wordlen(s, c));
	if (!array[i])
	{
		(ft_free(array));
		return (NULL);
	}
	return (array[i]);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	i;

	if (!s)
		return (NULL);
	array = (char **)ft_calloc(ft_word_counter(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			ft_putword(array, s, c, i);
		s += ft_wordlen(s, c);
		i++;
	}
	return (array);
}

/*
#include <stdio.h>

int	main(void)
{
    char *str = "goodbye, this cruel world";
    char c = 'x';
	int i = 0;
    char **output;
	
    output = ft_split(str, c);
	printf("string \"%s\" after ft_split:\n", str);
    while (output[i])
        printf("%s\n", output[i++]);
}
*/