/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:57:18 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 18:19:06 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *str = "qwerty";
	printf("string \"%s\"\n", "qwerty");
	printf("strlen: %zu\n", strlen(str));
	printf("ft_strlen: %zu\n", ft_strlen(str));
	return (0);
}
*/