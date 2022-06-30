/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 13:28:25 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/06/30 13:40:31 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strnew a function that allocates a new string of the size it takes as input.

Allocates with malloc() and returns a “fresh” string ending with ’\0’.
Each character of the string is initialized at ’\0’.
If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)

{
	int	amount = 5;
	int *ptr = (int *)ft_strnew(amount);
	int	i = 0;
	
	while (i < amount)
		printf("%d ", ptr[i++]);
	printf("\n");
	free(ptr);
	return (0);
}
*/