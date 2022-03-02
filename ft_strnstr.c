/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:43:25 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:30 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return a pointer to the first matching instance of string in other string

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*lit == '\0')
		return ((char *)big);
	while (big[i] && len)
	{
		j = 0;
		while (lit[j] && big[j + i] == lit[j] && i + j < len)
		{
			if (lit[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}			
		i++;
	}
	return (0);
}
