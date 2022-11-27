/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:05:10 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/27 18:41:01 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_words(char	const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			n++;
		}
	}
	return (n);
}

size_t	word_len(char const *s, size_t i, char c)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

void	*ft_freeall(char **list, size_t len)
{
	size_t	j;

	j = 0;
	while (j < len)
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

size_t	ft_setchar(char *dst, char const *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	tab = (char **)malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] && s[i] != c)
		{
			tab[j] = (char *)malloc((word_len(s, i, c) + 1) * sizeof(char));
			if (tab[j] == NULL)
				return (ft_freeall(tab, j));
			i += ft_setchar(tab[j], &s[i], c);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	int i;
// 	char	**tab = ft_split("hoge", 0);
// 	i = 0;
// 	while (i < num_words("hoge", 0) + 1)
// 	{
// 		printf("tab[%d] = %s\n", i, tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
