/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:09:28 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/06 23:22:45 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy (char *dest, const char *src)
{
	int	i;

	i = 0;
	if (src[i] != "\0")
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = "\0";
	return (dst);
}
