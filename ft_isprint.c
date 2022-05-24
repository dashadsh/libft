/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:08:10 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/24 17:54:33 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("Test: 'a'\tOriginal: %d\tMy function: %d\n", isprint('a'), ft_isprint('a'));
	printf("Test: '0'\tOriginal: %d\tMy function: %d\n", isprint('0'), ft_isprint('0'));
	printf("Test: '\t'\tOriginal: %d\tMy function: %d\n", isprint('\t'), ft_isprint('\t'));
	printf("Test: -1\tOriginal: %d\tMy function: %d\n", isprint(-1), ft_isprint(-1));
	printf("Test: 256\tOriginal: %d\tMy function: %d\n", isprint(256), ft_isprint(256));
	return (0);
}
*/