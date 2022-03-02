/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:41:55 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:48 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	ft_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (*(s + i))
	{
		if (*(s + i) && *(s + (i + 1)) != c && (s + (i + 1)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		start;
	int		end;
	char	**string;

	if (!str)
		return (NULL);
	i = 0;
	start = 0;
	string = ft_calloc(ft_count((char *)str, c) + 1, sizeof(char *));
	if (!string)
		return (NULL);
	while (*(str + start))
	{
		while (*(str + start) == c && *(str + start))
			start++;
		end = start;
		while (*(str + end) != c && *(str + end))
			end++;
		if (*(str + start))
			string[i] = ft_substr(str, start, end - start);
		i++;
		start = end;
	}
	return (string);
}
