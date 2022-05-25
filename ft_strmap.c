/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:11:21 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/25 16:35:37 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

char	f(char c) // prototyping inner f
{
	printf("inner function: char = %c\n", c);
	if ((c >= 'a' && c <= 'z'))
         return (c - ('a' - 'A'));
	return (0);
}

int main()
{
	char str[15] = "capitalize";
	
	printf("%s\n", str);
	printf("%s\n", ft_strmap(str, f));
	return 0;
}
*/