/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 03:36:16 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/07 13:04:52 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*node;

	new_head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&new_head, del);
			new_head = NULL;
			return (NULL);
		}
		node->content = (f)(lst->content);
		ft_lstadd_back(&new_head, node);
		lst = lst->next;
	}
	return (new_head);
}
