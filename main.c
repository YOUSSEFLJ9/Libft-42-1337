/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:38:39 by ymomen            #+#    #+#             */
/*   Updated: 2023/11/06 20:52:11 by ymomen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int	f;

	f = open("./youssef.txt", (O_RDWR | O_CREAT));
	printf("%d\n", f);
	ft_putnbr_fd(-4572, f);
	return (0);
}

// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);

// 	printf("%d\n", contdel(av[1], av[2][0]));
// 	return (0);
// }