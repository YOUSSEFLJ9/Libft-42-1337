/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:43:03 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/04 22:50:40 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mystrdup(const char *s1, size_t len)
{
	char		*dup;
	size_t		lenr;
	size_t		i;

	lenr = 0;
	i = 0;
	dup = NULL;
	while (s1[lenr])
		lenr++;
	if (lenr >= len)
		dup = (char *) malloc(len +1 * sizeof(char));
	else if (lenr < len)
		dup = (char *) malloc(lenr +1 * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < len && s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	lenglb;
	char			*other;

	if (!s)
		return (NULL);
	lenglb = ft_strlen(s);
	if (lenglb > start)
		return (ft_mystrdup(s + start, len));
	else
	{
		other = (char *) malloc(1 * sizeof(char));
		if (!other)
			return (NULL);
		other[0] = '\0';
		return (other);
	}
}
