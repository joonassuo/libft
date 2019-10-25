/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:16:31 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/22 10:28:13 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(const char *s, char (*f)(char))
{
	char		*dst;
	size_t		size;
	size_t		i;

	if (s && f)
	{
		size = sizeof(char) * ft_strlen((char *)s);
		if (!(dst = ft_strnew(size)))
			return (NULL);
		i = 0;
		while (i < size)
		{
			dst[i] = f(*s);
			i++;
			s++;
		}
		return (dst);
	}
	return (NULL);
}
