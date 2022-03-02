/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:42:49 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:28:04 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
	{
		return (0);
	}
	while (n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (*(s1 - 1) - *(s2 - 1));
}
