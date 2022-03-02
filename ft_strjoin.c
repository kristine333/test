/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:41:59 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:43 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatenate two strings into one new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_length;
	size_t	length_dst;
	size_t	length_src;
	char	*res;

	length_dst = ft_strlen((char *)s1);
	length_src = ft_strlen((char *)s2);
	total_length = length_src + length_dst;
	res = malloc(total_length + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, length_dst + 1);
	ft_strlcpy(&res[(length_dst)], s2, length_src + 1);
	return (res);
}
//#include <stdio.h>
//int main()
//{
//      char    first[] = "First";
//      char    second[] = "&second";
//      printf("%s\n%s\n%s\n", first, second, ft_strjoin(first, second));
//}
