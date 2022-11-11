/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:37:29 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/12 01:52:45 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc (count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, size * count);
	return (ptr);
}

int	main (void)
{
	long * pMMem;	//for malloc
	long * pCMem;	//for calloc
	long * ftMem;	//for ft_calloc

	pMMem = (long *)malloc (sizeof(long) * 3);
	pCMem = (long *)calloc (3, sizeof(long));
	ftMem = (long *)ft_calloc (3,sizeof(long));

	//確保領域の初期値表示
	printf("malloc [0]:0x%08x, [1]:0x%08x, [2]:0x%08x\n", pMMem[0], pMMem[1], pMMem[2]);
	printf("calloc [0]:0x%08x, [1]:0x%08x, [2]:0x%08x\n", pCMem[0], pCMem[1], pCMem[2]);
	printf("ft_calloc [0]:0x%08x, [1]:0x%08x, [2]:0x%08x\n", ftMem[0], ftMem[1], ftMem[2]);

	free(pMMem);
	free(pCMem);
	free(ftMem);

	return(0);
}
