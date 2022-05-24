/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:07:38 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 00:28:32 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || (ft_isdigit(c)));
}

/*
#include <stdio.h>

int main()
{
	char	c;

	c = '1';
	printf("The result is %d\n", ft_isalnum(c));
	c = 'g';
	printf("The result is %d\n", ft_isalnum(c));
	c = '!';
	printf("The result is %d\n", ft_isalnum(c));
	return (0);
}
*/