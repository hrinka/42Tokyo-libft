/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:40:21 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/06 23:52:36 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t c;
	size_t d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen (dst);
	d = 0;
	if (src[d] != "\0" && c + 1 < dstsize)
		dst[c] = src[d];
		c++;
		d++;
	dst[c] = "\0";
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
