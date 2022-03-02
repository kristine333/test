/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:41:40 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:57 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

// write a given char to a given file-directory
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
