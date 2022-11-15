/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:12:26 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/15 14:05:51 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy (ret, s + start, len + 1);
	return (ret);
}

// int	main(void)
// {
// 	printf ("%s\n", ft_substr("ABCDEFGHIJK", 5, 10));
// }
