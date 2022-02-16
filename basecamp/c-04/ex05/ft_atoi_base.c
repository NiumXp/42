/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nximenes <nximenes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 04:19:36 by nximenes          #+#    #+#             */
/*   Updated: 2022/02/16 16:07:22 by nximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

typedef unsigned short	t_ushort;
typedef short			t_bool;

int	ft_strindex(char chr, char *str)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (*str++ == chr)
			return (index);
		++index;
	}
	return (-1);
}

t_ushort	ft_is_invalid_base(char *base)
{
	unsigned int	length;

	length = 0;
	while (*base)
	{
		if (ft_strindex(*base, "+- \f\n\r\t\v") != -1)
			return (TRUE);
		++base;
		++length;
	}
	if (length <= 1)
		return (TRUE);
	base -= length;
	while (*base)
	{
		if (ft_strindex(*base, base + 1) != -1)
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

int	ft_numop(int x, int y, int is_sum)
{
	if (is_sum)
		return (x + y);
	return (x - y);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	number;
	int	length;
	int	is_negative;

	if (ft_is_invalid_base(base))
		return (0);
	number = 0;
	length = ft_strlen(base);
	is_negative = 0;
	while (*str == ' ')
		++str;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = !is_negative;
	while (*str)
	{
		index = ft_strindex(*str++, base);
		if (index == -1)
			break ;
		number = ft_numop(number * length, index, !is_negative);
	}
	return (number);
}
