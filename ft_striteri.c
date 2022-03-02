/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 23:06:42 by kkivi             #+#    #+#             */
/*   Updated: 2022/03/02 23:16:14 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parameters #1. The string on which to iterate.
//#2. The function to apply to each character.
//Return value None.
//External functs. None
#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &(s[i]));
		i++;
	}
}
