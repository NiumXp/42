/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:53:01 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/06 23:53:03 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	return (' ' <= c && c <= '~');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharcode(char num)
{
	char			buff[2];
	char			*chrs;
	unsigned int	index;

	ft_putchar('\\');
	buff[0] = '0';
	buff[1] = '0';
	chrs = "0123456789abcdef";
	index = 0;
	while (num > 0)
	{
		buff[2 - ++index] = chrs[num % 16];
		num /= 16;
	}
	ft_putchar(buff[0]);
	ft_putchar(buff[1]);
}

void	ft_putstr_non_printable(char *str)
{
	char	chr;

	while (*str)
	{
		chr = *str;
		if (!ft_is_printable(chr))
			ft_putcharcode(chr);
		else
			ft_putchar(chr);
		++str;
	}
}
