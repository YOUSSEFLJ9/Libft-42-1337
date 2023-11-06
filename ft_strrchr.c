/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:00:47 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/04 23:49:17 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			last = (char *) s + i;
		i++;
	}
	if (last)
		return (last);
	else if (s[i] == (char) c)
		return ((char *) s + i);
	else
		return (NULL);
}
