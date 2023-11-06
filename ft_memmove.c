/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:27:37 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/01 19:15:21 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			cont;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest > src)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		cont = 0;
		while (cont < len)
		{
			d[cont] = s[cont];
			cont++;
		}
	}
	return (dest);
}
