/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:05:53 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/15 15:47:13 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc (sizeof(char) * (len + 1));
	if (ret == NULL)
		return (0);
	ft_strlcpy (ret, s1, len + 1);
	ft_strlcat (ret, s2, len + 1);
	return (ret);
}

int	main(void)
{
	printf ("%s\n", ft_strjoin("Billionare", "BoysClub"));
	return (0);
}
