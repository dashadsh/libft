/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:08:17 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 16:29:17 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *)b)[len] = c;
	return (b);
}

/*
#include <stdio.h>

	int main (void)
	{
		char str[11] = "abcdeabcde";
		printf("str after memset: %s\n", (char *)ft_memset(str, 90, 5));
		return(0);
	}
*/