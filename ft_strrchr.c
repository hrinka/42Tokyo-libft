/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:46:41 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/08 16:22:36 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}

//int	main(void)
// {
// 	char	*str;
// 	char	c;

// 	str = "ahijidfjijdiji8hhqhj";
// 	c = 'j';
// 	printf("%p\n", strrchr(str, c));
// 	printf("%p\n", ft_strrchr(str, c));
// }