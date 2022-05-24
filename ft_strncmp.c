/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:08:22 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 16:30:34 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
return ((unsigned char)s1[i] - (unsigned char)s2[i]); 
- the same
*/
/*
#include <stdio.h>

int main () 
{
	char	str1[7] = "abbdef";
	char	str2[7] = "abcdef";
	int	res = ft_strncmp(str1, str2, 3);
	
  	printf ("%d\n", res);
 	if (res < 0) 
        printf("str1 is less than str2\n");
 	else if (res > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 = str2\n");
	return (0);
}
*/
