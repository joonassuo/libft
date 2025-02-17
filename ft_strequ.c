/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:50:30 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/22 11:07:03 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
		if (ft_strcmp(s1, s2) == 0)
			return (1);
	return (0);
}
