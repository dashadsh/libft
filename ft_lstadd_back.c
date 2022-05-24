/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:26:35 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/23 22:00:17 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	
	temp = lst;
	if (!lst)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
