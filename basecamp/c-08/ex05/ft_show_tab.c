/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 05:13:09 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/17 06:00:10 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

#define FL_STDOUT 1
#define NEW_LINE '\n'

void	ft_putchar(char c)
{
	write(FL_STDOUT, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	unit;

	if (nb < 0)
	{
		ft_putchar('-');
		unit = (nb % 10) * -1 + '0';
	}
	else
		unit = (nb % 10) + '0';
	nb /= 10;
	if (nb < 1)
		nb *= -1;
	if (nb != 0)
		ft_putnbr(nb);
	ft_putchar(unit);
}

void	ft_printnbr(int n)
{
	ft_putnbr(n);
	ft_putchar(NEW_LINE);
}

void	ft_printstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar(NEW_LINE);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_printstr(par->str);
		ft_printnbr(par->size);
		ft_printstr(par->copy);
		++par;
	}
}
