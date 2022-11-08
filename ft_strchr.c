/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:13 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/08 15:45:46 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str)
	{
		while (*str)
		{
			if ((char)c == *str)
				return (str);
			str++;
		}
		if ((char)c == 0)
			return (str);
	}
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
