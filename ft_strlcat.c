/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:43:08 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:41 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	k;
	size_t	l;
	size_t	m;

	l = 0;
	k = 0;
	m = ft_strlen(dst);
	if (ft_strlen(dst) >= size)
		return (ft_strlen((char *)src) + size);
	while (dst[l])
		l++;
	while (src[k] && (l < (size - 1)))
	{
		dst[l] = src[k];
		l++;
		k++;
	}
	dst[l] = '\0';
	return (m + ft_strlen((char *)src));
}
