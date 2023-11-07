/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:40:08 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/07 02:45:00 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	if (!lst)
		return ;
	node = *lst;
	next = node;
	while (node != NULL)
	{
		next = node->next;
		(del)(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}
