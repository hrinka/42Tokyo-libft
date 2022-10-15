/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:55:10 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/13 02:11:27 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *, int c, size_t len)
{
	unsigned char *dst_cpy;

	dst_cpy = (unsigned char*)s;
	while (len--)
		*dst_cpy++ = (unsigned char)c;
	return (s);
}
