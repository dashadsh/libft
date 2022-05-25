/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:40:36 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/25 18:09:48 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’.  The variable
’next’ is initialized to NULL.

RETURN: The new node
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

/*
BROKEN MAIN
#include <stdio.h>

int		main(void)
{
	char	*content = "some text";
	t_list	*newnode;
	
	newnode = ft_lstnew((void *)content);
	
	printf("\n%d\n", newnode->content);
	return (0);
}
*/

/*
	(*newnode).content = content;
	is the same as
	newnode->content = content;
*/