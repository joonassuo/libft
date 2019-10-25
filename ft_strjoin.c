/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:05:30 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/22 12:23:57 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(const char *s1, const char *s2)
{
	char			*dst;
	char			*c1;
	char			*c2;
	unsigned int	len_total;
	size_t			i;

	len_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1 || !s2 || !(dst = (char *)malloc(sizeof(char) * len_total)))
		return (NULL);
	i = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (*c1)
		dst[i++] = *(c1++);
	while (*c2)
		dst[i++] = *(c2++);
	dst[i] = '\0';
	return (dst);
}
