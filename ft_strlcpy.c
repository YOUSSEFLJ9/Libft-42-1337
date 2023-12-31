/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:16:21 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/04 01:46:50 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	lens;

	count = 0;
	lens = 0;
	while (src[lens])
		lens++;
	if (dstsize == 0)
		return (lens);
	while (src[count] != '\0' && count + 1 < dstsize)
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (lens);
}
