/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:52:46 by hrinka            #+#    #+#             */
/*   Updated: 2022/10/16 00:58:12 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 32
typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}


#endif