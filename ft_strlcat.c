/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:10:03 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/25 13:20:13 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

size_t					ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t				dest_len;
	size_t				src_len;

	src_len = ft_strlen(src);
	dest_len = ft_min(ft_strlen(dest), size);
	if (src_len < size - dest_len)
		ft_strncat(dest, src, src_len + 1);
	else if (size > dest_len)
	{
		ft_strncat(dest, src, size - dest_len - 1);
		dest[size - 1] = '\0';
	}
	return (dest_len + src_len);
}
