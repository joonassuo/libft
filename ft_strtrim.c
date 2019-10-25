/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:27:38 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/23 14:37:17 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(const char *s)
{
	size_t	end;
	size_t	start;
	char	*copy;

	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	while (ft_is_whitespace(s[start]) && s[start])
		start++;
	if (s[start] == '\0')
		start = end + 1;
	else
	{
		while (ft_is_whitespace(s[end]) && s[end])
			end--;
	}
	if (!(copy = ft_strsub(s, (unsigned int)start, (end - start + 1))))
		return (NULL);
	return (copy);
}
