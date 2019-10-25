/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:32:42 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/25 12:54:17 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_chars(const char *s_ptr, char c)
{
	int			charcount;

	charcount = 0;
	while (*s_ptr && *s_ptr != c)
	{
		charcount++;
		s_ptr++;
	}
	return (charcount);
}

static int		ft_count_words(const char *s, char c)
{
	int			wordcount;
	int			new_word;
	int			i;

	wordcount = 0;
	new_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (new_word)
				new_word = 0;
		}
		else
		{
			if (!new_word)
			{
				new_word = 1;
				wordcount++;
			}
		}
		i++;
	}
	return (wordcount);
}

char			**ft_strsplit(const char *s, char c)
{
	char		**result;
	int			words;
	char		*s_ptr;
	int			i;
	int			j;

	if (!s || !c)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(result = (char**)malloc(sizeof(char **) * (words + 1))))
		return (NULL);
	s_ptr = (char *)s;
	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] == c && s[j])
			j++;
		result[i] = ft_strsub(s, (unsigned int)j, ft_count_chars(s_ptr + j, c));
		j += ft_count_chars(s_ptr + j, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}
