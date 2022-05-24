/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:00:32 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 21:18:53 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
save a copy of a string

Allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it.  
The pointer may subsequently be used as an argument to the function free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = malloc(ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, (ft_strlen(s1) + 1));
	return (copy);
}
