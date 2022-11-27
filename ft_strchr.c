/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:13 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/27 21:51:40 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if ((char)c == *str)
			return (str);
		str++;
	}
	if ((char)c == 0)
		return (str);
	return (NULL);
}

//int	main(void)
//{
//	char	*str;
//	char	c;
//
//	str = "ahijidfjijdiji8hhqhj";
//	c = 'q';
//	printf("%p\n", strchr(str, c));
//	printf("%p\n", ft_strchr(str, c));
//}
