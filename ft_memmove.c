/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:18:37 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/15 23:56:57 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void	*d, int	c, size_t len)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}
