/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:04:20 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/23 19:12:55 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	casted_n;
	int		len;
	char	*str;

	casted_n = n;
	len = counter(casted_n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (casted_n == 0)
		str[0] = '0';
	else if (casted_n < 0)
	{
		str[0] = '-';
		casted_n = -casted_n;
	}
	while (casted_n)
	{
		len--;
		str[len] = casted_n % 10 + '0';
		casted_n = casted_n / 10;
	}
	return (str);
}
