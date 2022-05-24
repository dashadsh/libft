/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:50:24 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 21:12:27 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memory allocation

Allocates enough space for count objects that are size bytes of memory each.

Returns a pointer to the allocated memory. 
The allocated memory is filled with bytes of value zero.
function erases n bytes of memory starting at location pointed to by s.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*str;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	str = (size_t *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}

/*
#include <stdio.h>

int	main(void)

{
	int	amount = 5;
	int *ptr = (int *)ft_calloc(amount, sizeof(int));
	int	i = 0;
	
	while (i < amount)
		printf("%d ", ptr[i++]);
	printf("\n");
	free(ptr);
	return (0);
}
*/