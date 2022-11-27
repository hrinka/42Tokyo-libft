/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:57:21 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/27 16:46:53 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n == -2147483648)
	{
		ft_putnbr_fd(-2, fd);
		n = 147483648;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

// #include <fcntl.h>
// #include <limits.h>
// #include <stdio.h>
// #include <sys/stat.h>
// #include <sys/types.h>

// int  main(void)
// {
//     int fd;
//     int i = 2147483647;
//     //  fd = 1;
//     fd = 1;
//     ft_putnbr_fd(i, fd);
//     return (0);
// }
