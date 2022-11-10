/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:43:36 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/10 16:45:47 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		else
			n--;
			s1++;
			s2++;
	}
	return (0);
}

// int main(void)
// {
// 	char *str1;
// 	char *str2;

// 	int	n;

// 	str1 = "abcdefgh";
// 	str2 = "abcdeqqq";
// 	n = 6;
// 		printf("%d\n", strncmp(str1, str2, n));
// 		printf("%d\n", ft_strncmp(str1, str2, n));
// }
