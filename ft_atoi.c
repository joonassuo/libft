/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:44:38 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/25 13:27:46 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (*str && (*str == ' ' || *str == '\t' ||
				*str == '\n' || *str == '\v' ||
				*str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str <= '9' && *str >= '0')
	{
		if (result > 469762049 && sign == 1)
			return (-1);
		else if (result > 469762049 && sign == -1)
			return (0);
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}
