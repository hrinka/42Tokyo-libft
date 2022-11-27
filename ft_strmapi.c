/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:41:29 by hrinka            #+#    #+#             */
/*   Updated: 2022/11/27 16:57:56 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*str;

	if (!s || !f)
		return (0);
	len = ft_strlen (s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}


// # define TEST_FT(a, b) \
// do {ft_ret = ft_strmapi(a, b); \
// printf("%s", color_alamode(__LINE__)); \
// printf("(line)%3d  ""(ft)%7s\t""(arg1)%7s\t""\n", \
// __LINE__, ft_ret, (char const  *)a); free(ft_ret);} while(0)

// //func=toupper,func2=tolower,func=to_isalnum
// static char *color_alamode(int line);
// static int case_sample(void);
// static char    func3(unsigned int i, char j);
// static char    func2(unsigned int i, char j);
// static char    func(unsigned int i, char j);
// static char    ft_mapi_isalnum(int c);

// int main()
// {
//     puts("\x1b[48;5;015m");
//     case_sample();
// //
//     printf("\x1b[38;5;198m""\n--- end of %s ---\n""\x1b[37m", __func__);
//     puts("\x1b[48;5;198m");//197~201 choose your favorite color
//     puts("\n\n""\x1b[38;5;088m"" You ""\x1b[38;5;040m""are ""\x1b[33m""Pretty ""\x1b[38;5;019m""Cure! \n");
//     puts("\x1b[38;5;015m""---check leaks---\n");
// 	system("leaks -q a.out");
// 	puts("---leaks end---");
//     puts("\x1b[37m");
//     puts("\x1b[48;5;000m");
// 	return (0);
// }

// static char    *color_alamode(int line)
// {
//     if (line % 5 == 0)
//         return ("\x1b[38;5;160m");
//     else if (line % 5 == 1)
//         return ("\x1b[38;5;197m");
//     else if (line % 5 == 2)
//         return ("\x1b[38;5;202m");
//     else if (line % 5 == 3)
//         return ("\x1b[38;5;027m");
//     else if (line % 5 == 4)
//         return ("\x1b[38;5;093m");
//     return (0);
// }

// static int case_sample()
// {
//     char    *ft_ret;
//     char    *s = "abC-e";

//     //func=toupper,func2=tolower,func=to_isalnum
// 	printf("\x1b[38;5;198m""--- %s ---\n\n", __func__);
//     TEST_FT(s, func);
//     TEST_FT(s, func2);
//     TEST_FT(s, func3);
//     TEST_FT(s, NULL);
//     TEST_FT(NULL, func);
//     TEST_FT(NULL, func2);
//     TEST_FT(NULL, func3);
//     TEST_FT(NULL, NULL);
//     TEST_FT("\0", func);
//     TEST_FT("\0", func2);
//     TEST_FT("\0", func3);
//     TEST_FT("\0", NULL);
//     TEST_FT("aaa", func);
//     TEST_FT("aaa", func2);
//     TEST_FT("aaa", func3);
//     TEST_FT("aaa", NULL);
//     printf("\x1b[38;5;198m""\n--- end of %s ---\n""\x1b[37m", __func__);
//     return (0);
// }


// static char    ft_mapi_isalnum(int c)
// {
//     if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z' ) || ('0' <= c && c <= '9'))
//         return ('1');
//     return ('0');
// }

// static char    func(unsigned int i, char j)
// {
//     char    c;

//     (void)i;
//     c = toupper(j);
//     return (c);
// }

// static char    func2(unsigned int i, char j)
// {
//     char    c;

//     (void)i;
//     c = tolower(j);
//     return (c);
// }

// static char    func3(unsigned int i, char j)
// {
//     char    c;

//     (void)i;
//     c = ft_mapi_isalnum(j);
//     return (c);
// }
