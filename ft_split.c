/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:20:33 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 22:43:40 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contdel(char const *s, char c)
{
	int	i;
	int	rst;

	i = 0;
	rst = 0;
	while (s[i])
	{
		if ((s[i + 1] == c && s[i] != c) || (s[i + 1] == '\0' && s[i] != c))
			rst++;
		i++;
	}
	return (rst);
}

static char	**freet(char **ptr, int i)
{
	while (i >= 0)
		free (ptr[i--]);
	free (ptr);
	return (NULL);
}

static char	*ft_monstrdup(const char *s1, size_t size)
{
	char		*dup;
	size_t		i;

	i = 0;
	dup = (char *) malloc(size + 1 * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < size)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	**fullandfree(char **ptr, const char *s, char c, int count_words)
{
	int	start;
	int	end;
	int	i;

	start = 0;
	end = 0;
	i = 0;
	while (s[start] && count_words > i)
	{
		while (s[end] && s[end] == c)
			end++;
		start = end;
		while (s[end] != '\0' && s[end] != c)
			end++;
		ptr[i] = ft_monstrdup(&s[start], (end - start));
		if (!ptr[i])
			return (freet(ptr, i));
		start = end;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		count_words;
	char	**ptr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	count_words = contdel(s, c);
	ptr = (char **) malloc(sizeof(char *) * (count_words + 1));
	if (!ptr)
		return (NULL);
	return (fullandfree(ptr, s, c, count_words));
}
