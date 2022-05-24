/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:42:15 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 00:34:03 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memchr -- locate byte in byte string
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*
if (*((unsigned char *)(s + i)) == (unsigned char)c)
*/

/*
#include <stdio.h>
int main ()
{
	const char	str[9] = "abcd.fgh";
	const char	c = '.';
	char		*result;

	result = ft_memchr(str, c, 9);

	printf("String after character is %s\n", result);
	return (0);
}
*/