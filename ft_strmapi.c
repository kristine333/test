/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:42:04 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:33 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// apply a given function to every char of s
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	res = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
