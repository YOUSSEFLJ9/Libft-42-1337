/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:21:20 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/10 11:39:20 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lens;
	size_t	lend;
	size_t	i;

	lens = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (lens);
	lend = ft_strlen(dst);
	i = 0;
	if (dstsize <= lend)
		return (lens + dstsize);
	while ((lend + i < dstsize - 1) && src[i])
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
