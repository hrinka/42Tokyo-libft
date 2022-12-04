/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:12:26 by hrinka            #+#    #+#             */
/*   Updated: 2022/12/04 14:59:22 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		ptr = (char *) malloc (sizeof (char));
		if (!ptr)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (ft_strlen(s) - start > len)
		i = len + 1;
	else
		i = ft_strlen(s) - start + 2;
	ptr = (char *) malloc ((i) * sizeof (char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, i);
	return (ptr);
}

// int	main(void)
// {
// 	printf ("%s\n", ft_substr("", 4294967295, 1));
// }
	// char	*ret;

	// if (s == NULL)
	// 	return (NULL);
	// if (ft_strlen(s) < start)
	// 	len = 0;
	// if (ft_strlen(s + start) < len)
	// 	len = ft_strlen(s + start);
	// ret = malloc(sizeof(char) * (len + 1));
	// if (ret == NULL)
	// 	return (NULL);
	// ft_strlcpy (ret, s + start, len + 1);
	// return (ret);