/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:16:16 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/25 16:31:44 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		f(s + index);
		index++;
	}
}

/*
f(s + index)
is the same as:
f(&s[index])
*/

/*
#include <stdio.h>

void f(char *str)
{
	printf("inner function: string = %s\n", str);
}

int main()
{
	char str[15] = "doesn't change";
	printf("The result %s:\n", str);
	ft_striter(str, f);
	return 0;
}
*/