/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:46:41 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/27 16:57:41 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == c)
			return (last + i);
		i--;
	}
	if (last[i] == c)
		return (last);
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	char	c;

// 	str = "abcdefghi";
// 	c = 'z';
// 	printf("%p\n", strrchr(str, c));
// 	printf("%p\n", ft_strrchr(str, c));
// }
