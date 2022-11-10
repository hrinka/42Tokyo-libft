/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:55:43 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/10 16:41:51 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(const char *) s == (unsigned char) c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;
// 	char	c;
// 	int	n;

// 	str = "abcd3efghij3klmn";
// 	c = '3';
// 	n = 10;
// 	printf("%s\n", memchr(str, c, n));
// 	printf("%s\n", ft_memchr(str, c, n));
// }
