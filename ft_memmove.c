/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:19:51 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 16:29:05 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function copies n bytes from memory area src to memory area dest,
the memory areas may overlap 
if src < dst copy from back to front, or use ft_memcpy
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
#include <stdio.h>

int main()
{
	char dst[100] = "freestyle";
	char src[100] = "anticipation";
	printf("dst after memmove: %s\n", (char *)ft_memmove(dst, src, 4));
	return (0);
}
*/