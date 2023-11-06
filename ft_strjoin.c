/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:18:15 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 22:52:14 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	totalen(const char *s1, const char *s2)
{
	size_t	s1l;
	size_t	s2l;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	return (s1l + s2l);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lentot;
	size_t	i;
	size_t	count;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	lentot = totalen(s1, s2);
	i = 0;
	count = 0;
	newstr = (char *) malloc(lentot + 1);
	if (!newstr)
		return (NULL);
	while (s1[count] && lentot > count)
	{
		newstr[count] = s1[count];
		count++;
	}
	while (s2[i] && lentot > (count + i))
	{
		newstr[count + i] = s2[i];
		i++;
	}
	newstr[count + i] = '\0';
	return (newstr);
}
