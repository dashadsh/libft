/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:00:32 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 16:29:55 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	copy = malloc(ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
*/