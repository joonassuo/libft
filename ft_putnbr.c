/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuonper <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:59:08 by jsuonper          #+#    #+#             */
/*   Updated: 2019/10/22 16:06:48 by jsuonper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_case_zero(void)
{
	ft_putchar('0');
}

static void		ft_split_number(int n)
{
	int			number;
	int			digit;
	int			digit_array[10];
	int			index;

	index = 0;
	number = n;
	while (number > 0)
	{
		digit = number % 10;
		digit_array[index] = digit;
		number /= 10;
		index++;
	}
	index--;
	while (index > -1)
	{
		ft_putchar(digit_array[index] + '0');
		index--;
	}
}

static void		ft_negative_number(int n)
{
	int			positive;

	positive = n * -1;
	ft_putchar('-');
	ft_split_number(positive);
}

void			ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_negative_number(-214748364);
		ft_putchar(8 + '0');
	}
	else if (nb == 0)
		ft_case_zero();
	else if (nb < 0)
		ft_negative_number(nb);
	else
		ft_split_number(nb);
}
