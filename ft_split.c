/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:36:59 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 11:03:02 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	i;

	if (!s)
		return (0);
	array = malloc((ft_word_counter(s, c) + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			array[i++] = ft_substr(s, 0, ft_wordlen(s, c));
			s += ft_wordlen(s, c);
		}
	}
	array[i] = NULL;
	return (array);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
_________
what if is not possible -
ft_substr(s, 0, ft_wordlen(s, c));
- need free?
*/
/*
#include <stdio.h>

int	main(void)
{
    char *str = "goodbye, this cruel world";
    char c = ' ';
	int i = 0;
    char **output;
	
    output = ft_split(str, c);
    while (output[i])
        printf("%s\n", output[i++]);
}
*/