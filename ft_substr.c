/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:42:11 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:22 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (0);
	i = start;
	if (ft_strlen(s) < start)
		return (ft_strdup("\0"));
	while (s[i] != '\0')
		i++;
	if (len > (i - start))
		len = i - start;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(sub_str))
		return (0);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start];
		i++;
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
