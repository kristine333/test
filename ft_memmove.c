/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:42:58 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:28:02 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}	
	}
	else
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dst);
}
