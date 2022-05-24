/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:25:24 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 22:23:10 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size-bounded string copying

take the full size of the destination buffer
and guarantee NUL-termination if there is room. 
Note that room for the NUL should be included in dstsize.

copies up to dstsize - 1 characters from the string src to dst, 
NUL-terminating the result if dstsize is not 0.
*/

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
