/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:53:14 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/07 18:38:53 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1
#define ADDRESS_SIZE 16

typedef unsigned int	t_uint;
typedef unsigned short	t_byte;
typedef unsigned long	t_ulong;

void	ft_uint_to_hex(t_ulong num, char *buff, t_uint size)
{
	char	*chrs;
	t_uint	index;

	chrs = "0123456789abcdef";
	size -= 1;
	index = 0;
	while (num > 0)
	{
		buff[size - index++] = chrs[num % 16];
		num /= 16;
	}
	while (index <= size)
	{
		buff[size - index++] = '0';
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(STDOUT, str++, 1);
	}
}

void	ft_putaddr(void *addr)
{
	char	buff[ADDRESS_SIZE];

	ft_uint_to_hex((t_ulong)addr, buff, ADDRESS_SIZE - 1);
	ft_putstr(buff);
	ft_putstr(": ");
}

int	ft_puthdump(void *addr, t_uint size)
{
	char	buff[3];
	int		counter;
	int		columns;
	char	*pchr;
	int		length;

	pchr = (char *)addr;
	columns = 0;
	counter = 16;
	length = (int)size;
	while (counter > 0)
	{
		if (length > 0)
		{
			ft_uint_to_hex((t_uint)(*pchr++), buff, 2);
			ft_putstr(buff);
			++columns;
			--length;
		}
		else
			ft_putstr("  ");
		if (counter-- % 2)
			ft_putstr(" ");
	}
	return (columns);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	chr;
	int		columns;
	int		is_printable;

	while (size > 0)
	{
		ft_putaddr(addr);
		columns = ft_puthdump(addr, size);
		size -= columns;
		while (columns--)
		{
			chr = *(char *)addr;
			is_printable = (' ' <= chr && chr <= '~');
			if (is_printable)
				write(STDOUT, &chr, 1);
			else
				write(STDOUT, ".", 1);
			++addr;
		}
		ft_putstr("\n");
	}
	return (addr);
}
