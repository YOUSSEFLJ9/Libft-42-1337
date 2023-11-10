/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:40:08 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/07 09:32:17 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (!lst || !del)
		return ;
	node = *lst;
	next = node;
	while (node)
	{
		next = node->next;
		(del)(node->content);
		free(node);
		node = NULL;
		node = next;
	}
	*lst = NULL;
}
