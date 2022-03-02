/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:43:29 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:28 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*end;

	end = 0;
	c = (char)c;
	while (*str)
	{
		if (*str == c)
		{
			end = (char *) str;
		}
		str++;
	}
	if (!c)
		return ((char *) str);
	return (end);
}
