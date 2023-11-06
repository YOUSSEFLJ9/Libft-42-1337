/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:37:31 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/04 00:52:12 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	count = 0;
	str = (unsigned char *) s;
	while (count < n)
	{
		if (str[count] == (unsigned char) c)
			return (s + count);
		count++;
	}
	return (NULL);
}
