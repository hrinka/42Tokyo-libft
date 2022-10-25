/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:17:43 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/15 23:39:55 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void	*dst, const void *src, size_t	n)
{
	const char	*tmp1;
	char	*tmp2;
	if (dst == NULL && src == NULL)
		return (NULL);
	tmp1 = (const char	*)src;
	tmp2 = (char *)dst;
	while (n--)
		*tmp++ = *tmp1++;
	return (dst);
}
