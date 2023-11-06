/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:57:42 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 01:01:08 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigit(long *n)
{
	int		index;
	long	nb;

	index = 0;
	nb = *n;
	if (*n <= 0)
	{
		index++;
		*n *= -1;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		index++;
	}
	return (index);
}

char	*ft_itoa(int n)
{
	int		digit;
	long	new_n;
	char	*arr;

	new_n = n;
	digit = countdigit(&new_n);
	arr = (char *)malloc(digit + 1);
	if (!arr)
		return (NULL);
	arr[digit] = '\0';
	if (n < 0)
		arr[0] = '-';
	while (digit && (new_n || n == 0))
	{
		arr[--digit] = new_n % 10 + 48;
		new_n /= 10;
	}
	return (arr);
}
