/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:05:10 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/22 19:17:06 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_words(char	const *s, char c)
{
	int	i;
	int	n;

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

int	word_len(char const *s, int i)
{
	int	c;

	while (s[i] && s[i] != c)
	{
		i++;
		c++;
	}
	return (c);
}

void	*ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

void	ft_setchar(char *dst, char const *src, char c) //srcからcにぶち当たるまでdstにコピー
{
	while (s[i] && s[i] != c)
	{
		tab[j][k] = s[i];
		i++;
		k++;
	}
	tab[j][k] = '\0';
	j++;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = (char **)malloc((num_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tab[j] = (char *)malloc((word_len(s, i) + 1) * sizeof(char));
			if (!tab[j])
				return (ft_freeall(tab));
			ft_setchar();
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("hello,world,42,tokyo", '{');
	i = 0;
	while (i < num_words("hello,world,42,tokyo", '{') + 1)
	{
		printf ("tab[%d] = %s\n", i, tab[i]);
		i++;
	}
	return (0);
	// printf ("%d", word_len("you&I are here !", 7));
}
