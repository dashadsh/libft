/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:06:22 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/07/05 12:36:29 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strcpy
Copies string from (char *src) to (char *dest)
adds NULL termination and returns dest string.
*/

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
