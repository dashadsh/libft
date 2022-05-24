/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:54:55 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 20:20:17 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
write zeroes to a byte string

Writes n zeroed bytes to the string s.  
If n is zero, does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int	main()
{
	char	str[9] = "abcdefgh";
	int	i = 0;
	
	printf("%s", str);
	printf("\n");	
	ft_bzero(str, 3);
	while (i <= 9)
		printf("%d ", str[i++]);
	printf("\n");
	printf("%s", str + 3);	// ("%s", str) doesn't show anything because
	printf("\n");			// setting even just the first `char` in the array to 0
	return (0);				// results in an empty string.
 }
*/