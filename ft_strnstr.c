/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:46:04 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/25 01:47:29 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)str);
	while ((str[i] != 0) && ((i + needle_len) <= len))
	{
		if (ft_strncmp(str + i, needle, needle_len) == 0)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
