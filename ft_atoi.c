/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivi <kkivi@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 22:41:20 by kkivi             #+#    #+#             */
/*   Updated: 2022/02/03 13:58:23 by kkivi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	result[2];

	i = 0;
	result[0] = 0;
	result[1] = 1;
	while (str[i] && ((9 <= str[i] && str[i] <= 13) || str[i] == 32) != 0)
		i++;
	if (str[i] == '-')
		result[1] = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result[0] = (result[0] * 10) + (str[i] - '0');
		i++;
	}
	return (result[0] * result[1]);
}
