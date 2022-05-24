/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:10:17 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/17 14:58:12 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}
/* why it s broken????
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}


char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*h;
	size_t	t;

	t = ft_strlen(s);
	h = (char *)s;
	i = 0;
	while (i <= t)
	{
		if (*(h + i) == (char)c)
			return (h + i);
		i++;
	}
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}


#include <stdio.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
*/