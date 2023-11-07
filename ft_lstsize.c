/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:30:30 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/07 00:33:55 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		coun_lst;

	node = lst;
	coun_lst = 0;
	while (node)
	{
		node = node->next;
		coun_lst++;
	}
	return (coun_lst);
}
