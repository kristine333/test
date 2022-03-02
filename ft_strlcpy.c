/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:43:13 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:39 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// copy size bytes from src to dest, overwriting dest
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1) < size)
	{
		if (!(size == 0))
			dst[i] = src[i];
		i++;
	}
	if (!(size == 0))
		dst[i] = '\0';
	return (ft_strlen((char *)src));
}
