/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:25:24 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 22:42:21 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	k;
	char			*d;
	unsigned int	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	d = (char *) malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	k = 0;
	while (s[k])
	{
		d[k] = f(k, s[k]);
		k++;
	}
	d[k] = '\0';
	return (d);
}
