/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:43:22 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:31 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//      compare the given inputs byte by byte returning 0 if they equal, and a
//      number depending on which of them has a first instance that respectively
//      is bigger or less than the other
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n - i > 0 && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
