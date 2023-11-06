/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 04:28:02 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 01:09:42 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *ndle, size_t len)
{
	size_t	s;
	size_t	n;

	s = 0;
	if (!haystack && len == 0)
		return (NULL);
	if ((ft_strlen(ndle) == 0) || ndle == haystack)
		return ((char *) haystack);
	while (haystack[s] && s < len)
	{
		n = 0;
		if (haystack[s] == ndle[n])
		{
			while ((ndle[n] != '\0') && (ndle[n] == haystack[s + n])
				&& (n + s) < len)
				n++;
		}
		if (ndle[n] == '\0')
			return ((char *)&haystack[s]);
		s++;
	}
	return (NULL);
}
