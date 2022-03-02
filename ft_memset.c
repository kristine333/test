/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:24:09 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:28:00 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)

{	
	size_t			i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
