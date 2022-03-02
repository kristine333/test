/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:42:45 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:28:06 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// return a pointer to the first instance of c in the s, checking only n bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
//int main()
//{
//      char    test[] = "abcdefghijklmnopqrstuvwxyz0123456789";
//      char    *c_pos;
//      char    c = 'v';
//      c_pos = ft_memchr(test, c, 36);
//      write(1, &c, 1);
//      write(1, "\t", 1);
//      write(1, c_pos, 12);
//}
