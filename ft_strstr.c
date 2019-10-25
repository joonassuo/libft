/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:20:09 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/25 13:32:29 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	char	*current;
	char	*pattern;

	if (!*to_find)
		return ((char *)str);
	while (*str)
	{
		current = (char *)str;
		pattern = (char *)to_find;
		while (*str && *pattern && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (current);
		str = current + 1;
	}
	return (NULL);
}
