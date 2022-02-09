/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:38:48 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/09 04:13:58 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define TRUE 1
#define FALSE 0
#define STDOUT 1

typedef unsigned short	t_ushort;
typedef short			t_bool;

t_ushort	ft_chr_is_in(char chr, char *str)
{
	while (*str)
		if (chr == *str++)
			return (TRUE);
	return (FALSE);
}

t_ushort	ft_is_invalid_base(char *base)
{
	unsigned int	length;

	length = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (TRUE);
		++base;
		++length;
	}
	if (length <= 1)
		return (TRUE);
	base -= length;
	while (*base)
	{
		if (ft_chr_is_in(*base, base + 1))
			return (TRUE);
		++base;
	}
	return (FALSE);
}

t_ushort	ft_strlen(char *str)
{
	t_ushort	length;

	length = 0;
	while (*str++)
		++length;
	return (length);
}

void	ft_putchar(char chr)
{
	write(STDOUT, &chr, sizeof(chr));
}

void	ft_putnbr_base(int nbr, char *base)
{
	t_ushort	index;
	t_ushort	length;
	char		buffer[32 + 1];

	if (ft_is_invalid_base(base))
		return ;
	index = 0;
	length = ft_strlen(base);
	if (nbr < 0)
		ft_putchar('-');
	while (nbr != 0)
	{
		buffer[index++] = base[!!(nbr % length)];
		nbr /= length;
	}
	while (index > 0)
		ft_putchar(buffer[--index]);
}
