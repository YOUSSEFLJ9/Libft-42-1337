/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lj9 <lj9@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:42:58 by ymomen            #+#    #+#             */
/*   Updated: 2023/12/09 16:58:19 by lj9              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (head->next)
			head = head->next;
		head->next = new;
	}
}
