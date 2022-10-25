/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:17:43 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/25 22:12:58 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t	n)
{
	const unsigned char	*s;
	unsigned char		*tmp2;

	if (dst == NULL && src == NULL)
		return (NULL);
	s = (const unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	while (n--)
		*tmp2++ = *s++;
	return (dst);
}
