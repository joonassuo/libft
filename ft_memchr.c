/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:01:40 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/18 13:06:25 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src_ptr;

	src_ptr = (unsigned char*)s;
	while (n--)
	{
		if (*src_ptr == (unsigned char)c)
			return ((void*)src_ptr);
		src_ptr++;
	}
	return (NULL);
}
