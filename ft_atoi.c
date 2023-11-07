/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:01:25 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/07 15:45:55 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int				sing;
	long long int	nb;

	nb = 0;
	sing = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sing *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57 && *str)
	{
		if (nb > MAX_DOUBLE || (nb == MAX_DOUBLE && *str - '0' > 7))
		{
			if (sing == 1)
				return (-1);
			return (0);
		}
		nb = (nb * 10) + (*str - 48);
		str++;
	}
	return (nb * sing);
}
