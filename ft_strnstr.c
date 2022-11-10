/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:23:18 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/10 20:29:02 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l2;

	i = 0;
	l2 = ft_strlen(needle);
	if (l2 == 0)
		return ((char *) haystack);
	while (len >= l2)
	{
		len--;
		if (!ft_memcmp(haystack, needle, l2))
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*largestring = "aabbbcdef";
	const char	*smallstring = "bbc";

	printf ("%s\n", strnstr(largestring, smallstring, 6));
	printf ("%s\n", ft_strnstr(largestring, smallstring, 6));
}
