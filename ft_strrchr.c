/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:46:41 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/27 18:16:10 by hrinka           ###   ########.fr       */
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
		if (last[i] == (char)c)
			return (last + i);
		i--;
	}
	if (last[i] == (char)c)
		return (last);
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	char	c;

// 	str = "abcdefghi";
// 	c = 'z';
// 	printf("%s\n", strrchr(str, c));
// 	printf("%s\n", ft_strrchr(str, c));
// }
