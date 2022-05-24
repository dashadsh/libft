/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoremyk <dgoremyk@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:56:36 by dgoremyk          #+#    #+#             */
/*   Updated: 2022/05/23 21:51:57 by dgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;
	t_list	*lstiteri;

	newlst = NULL;
	lstiteri = lst;
	while (lstiteri)
	{
		new = ft_lstnew(f(lstiteri->content));
		if (!new)
		{
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		ft_lstadd_back(&newlst, new);
		lstiteri = lstiteri -> next;
	}
	return (newlst);
}
