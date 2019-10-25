/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:19:46 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/23 13:57:24 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_itoa_len(int n)
{
	size_t	length;

	length = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		length++;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char		*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_itoa_len(n);
	if (!(res = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
	{
		res[len] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (res);
}
