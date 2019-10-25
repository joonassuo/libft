/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:42:33 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/24 10:42:21 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			dst[i] = f(i, *s);
			i++;
			s++;
		}
		return (dst);
	}
	return (NULL);
}
