/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:08:31 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/23 22:01:08 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*tale;

	if (!lst || !del)
		return ;
	tale = *lst;
	while (tale)
	{	
		head = tale;
		tale = tale->next;
		del(head->content);
		free(head);
	}
	*lst = NULL;
}
